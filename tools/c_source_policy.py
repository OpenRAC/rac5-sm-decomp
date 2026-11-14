"""Reject instruction injection and fixed-register bindings in C/C++ inputs.

An external assembler-name label only names an ELF symbol; it emits no instruction.
Such labels are allowed on file-scope declarations for retail C++ linkage names.
A reviewed public runtime-library target primitive (GCC longlong.h's __mips__
umul_ppmm) is accepted only in its exact upstream form: its template and
constraints are fixed and its operands are plain C expressions.
The compiler gate also checks preprocessed input so macros cannot hide assembly.
"""
from __future__ import annotations

import re

TOKEN = re.compile(
    r'(?P<comment>/\*.*?\*/|//[^\n]*)|'
    r'(?P<string>"(?:\\.|[^"\\])*"|\'(?:\\.|[^\'\\])*\')|'
    r'(?P<word>[A-Za-z_$][A-Za-z0-9_$]*)|(?P<other>\S)', re.S)
ASM_NAMES = {"asm", "__asm", "__asm__"}
SYMBOL = re.compile(r'"[A-Za-z_][A-Za-z0-9_.$]*"\Z')
# Public runtime-library target primitives retained unchanged from their upstream
# source, as AGENTS.md allows: (template, output constraints, input constraints).
# GCC longlong.h's __mips__ umul_ppmm is one multu that writes LO and HI.
RUNTIME_PRIMITIVES = (
    ('"multu %2,%3"', ('"=l"', '"=h"'), ('"d"', '"d"')),
)


def _operand_end(tokens: list, at: int) -> int | None:
    """Index after the parenthesized C operand that starts at TOKENS[AT]."""
    if at >= len(tokens) or tokens[at][0] != "(":
        return None
    depth = 0
    for index in range(at, len(tokens)):
        match = tokens[index]
        value = match[0]
        if (match.lastgroup == "string" or value in ASM_NAMES
                or value in ("{", "}", ";", "#")):
            return None
        if value == "(":
            depth += 1
        elif value == ")":
            depth -= 1
            if depth == 0:
                return index + 1
    return None


def _operands_end(tokens: list, at: int, constraints: tuple[str, ...]) -> int | None:
    """Index after `"c" (expr), ...` operands with exactly these constraints."""
    for number, constraint in enumerate(constraints):
        if number:
            if at >= len(tokens) or tokens[at][0] != ",":
                return None
            at += 1
        if at >= len(tokens) or tokens[at][0] != constraint:
            return None
        end = _operand_end(tokens, at + 1)
        if end is None:
            return None
        at = end
    return at


def runtime_primitive(tokens: list, index: int) -> bool:
    """Whether the asm word at TOKENS[INDEX] starts a reviewed upstream primitive."""
    for template, outputs, inputs in RUNTIME_PRIMITIVES:
        at = index + 1
        if [item[0] for item in tokens[at:at + 3]] != ["(", template, ":"]:
            continue
        end = _operands_end(tokens, at + 3, outputs)
        if end is None or end >= len(tokens) or tokens[end][0] != ":":
            continue
        end = _operands_end(tokens, end + 1, inputs)
        if end is not None and end < len(tokens) and tokens[end][0] == ")":
            return True
    return False


def policy_errors(source: str) -> list[str]:
    """Return source-line diagnostics, ignoring comments and literal contents."""
    # C joins escaped newlines before tokenization, including inside identifiers.
    text = re.sub(r'\\\r?\n', '', source)
    # Line markers and includes do not belong to the following declaration.
    # Keep macro definitions visible; expanded input is checked again by the gate.
    text = re.sub(r'(?m)^[ \t]*#[ \t]*(?:(?:line[ \t]+)?\d+|include\b)[^\n]*', '', text)
    tokens = [m for m in TOKEN.finditer(text) if m.lastgroup != "comment"]
    depth = 0
    start = 0
    problems = []
    for index, match in enumerate(tokens):
        value = match[0]
        if match.lastgroup == "word" and value in {"RAC5_WITNESS_PADDING", "RAC5_padding_sentinel"}:
            line = text.count('\n', 0, match.start()) + 1
            problems.append(f"line {line}: synthetic alignment probes belong in private experiments")
        if match.lastgroup == "word" and value in ASM_NAMES:
            prefix = [item[0] for item in tokens[start:index]]
            suffix = [item[0] for item in tokens[index + 1:index + 5]]
            # Only a declaration's assembler label, never a global asm statement,
            # local asm, volatile asm, extended operands or a register variable.
            symbol_label = (
                depth == 0 and len(prefix) >= 2 and "register" not in prefix
                and "#" not in prefix and prefix[-1] not in ("=", ",", ":")
                and len(suffix) == 4 and suffix[0] == "(" and suffix[2:] == [")", ";"]
                and SYMBOL.fullmatch(suffix[1]) is not None
            )
            if not symbol_label and not runtime_primitive(tokens, index):
                line = text.count('\n', 0, match.start()) + 1
                problems.append(f"line {line}: inline/global assembly or fixed-register binding is not C evidence")
        if match.lastgroup != "other":
            continue
        if value == "{":
            depth += 1
        elif value == "}":
            depth -= 1
            if depth == 0:
                start = index + 1
        elif value == ";" and depth == 0:
            start = index + 1
    return problems


def require_c_source(source: str, label: str) -> None:
    problems = policy_errors(source)
    if problems:
        raise ValueError(f"{label}: " + "; ".join(problems))
