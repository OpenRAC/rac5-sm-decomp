"""Check local Markdown destinations in the repository's contributor documentation.

This is a small scanner, not a complete CommonMark parser. It handles inline
links/images and single-line reference definitions, fenced/indented code and
inline code. HTML links, heading anchors and external resources are not checked.
"""

from __future__ import annotations

import argparse
import html
import re
from pathlib import Path
from urllib.parse import unquote, urlsplit

ROOT = Path(__file__).resolve().parents[1]


def blank(text: str) -> str:
    """Hide syntax while keeping line numbers and offsets stable."""
    return re.sub(r"[^\n]", " ", text)


def prose(text: str) -> str:
    lines = []
    fence = None
    for line in text.splitlines(keepends=True):
        marker = re.match(r"^ {0,3}(`{3,}|~{3,})(.*)$", line.rstrip("\r\n"))
        if fence:
            lines.append(blank(line))
            if marker and marker[1][0] == fence[0] and len(marker[1]) >= len(fence) and not marker[2].strip():
                fence = None
        elif marker and (marker[1][0] != "`" or "`" not in marker[2]):
            fence = marker[1]
            lines.append(blank(line))
        elif line.startswith(("    ", "\t")):
            lines.append(blank(line))
        else:
            lines.append(line)
    text = "".join(lines)
    text = re.sub(r"<!--[\s\S]*?-->", lambda m: blank(m[0]), text)
    # Backtick spans close only with a run of the same length.
    pattern = r"(?<!`)(`+)(?!`)([\s\S]*?)(?<!`)\1(?!`)"
    return re.sub(pattern, lambda m: blank(m[0]), text)


def unescape(text: str) -> str:
    return re.sub(r"\\([!\"#$%&'()*+,\-./:;<=>?@\[\]\\^_`{|}~])", r"\1", text)


def label(text: str) -> str:
    return " ".join(unescape(text).split()).casefold()


def destination(text: str, start: int) -> tuple[str, int] | None:
    """Read an angle-delimited or balanced bare Markdown destination."""
    if start >= len(text):
        return None
    if text[start] == "<":
        end = start + 1
        while end < len(text) and text[end] not in "\n<>":
            end += 2 if text[end] == "\\" else 1
        if end < len(text) and text[end] == ">":
            return text[start + 1:end], end + 1
        return None
    end, depth = start, 0
    while end < len(text):
        char = text[end]
        if char == "\\" and end + 1 < len(text):
            end += 2
            continue
        if char.isspace() or (char == ")" and depth == 0):
            break
        if char == "(":
            depth += 1
        elif char == ")":
            depth -= 1
        end += 1
    return (text[start:end], end) if depth == 0 else None


def links(text: str):
    """Yield (line number, raw destination) for recognized Markdown links."""
    text = prose(text)
    definitions = {}
    for match in re.finditer(r"^ {0,3}\[([^\]\n]+)\]:[ \t]*(.*)$", text, re.MULTILINE):
        parsed = destination(match[2], 0)
        if parsed:
            definitions.setdefault(label(match[1]), parsed[0])
        text = text[:match.start()] + blank(match[0]) + text[match.end():]
    stack = []
    index = 0
    while index < len(text):
        char = text[index]
        if char == "\\":
            index += 2
            continue
        if char == "[":
            stack.append(index)
        elif char == "]" and stack:
            start = stack.pop()
            end = index + 1
            target = None
            if end < len(text) and text[end] == "(":
                pos = end + 1
                while pos < len(text) and text[pos].isspace():
                    pos += 1
                parsed = destination(text, pos)
                if parsed:
                    raw, pos = parsed
                    # Accept an optional title, then the link's closing parenthesis.
                    tail = re.match(r'''\s*(?:"[^"\n]*"|'[^'\n]*'|\([^\n)]*\))?\s*\)''', text[pos:])
                    if tail:
                        target, end = raw, pos + tail.end()
            elif end < len(text) and text[end] == "[":
                close = text.find("]", end + 1)
                if close != -1:
                    ref = text[end + 1:close] or text[start + 1:index]
                    target = definitions.get(label(ref))
                    end = close + 1
            else:
                target = definitions.get(label(text[start + 1:index]))
            if target is not None:
                yield text.count("\n", 0, start) + 1, target
                index = end
                continue
        index += 1


def relative_path(raw: str) -> str | None:
    value = html.unescape(unescape(raw))
    try:
        parts = urlsplit(value)
    except ValueError:
        return None
    if parts.scheme or parts.netloc or not parts.path or parts.path.startswith(("/", "\\")):
        return None
    return unquote(parts.path)


def documents(root: Path) -> list[Path]:
    return [root / name for name in ("README.md", "LEGAL.md", "CONTRIBUTING.md")] + sorted((root / "docs").rglob("*.md"))


def audit(root: Path) -> tuple[int, list[tuple[str, int, str]]]:
    checked = 0
    missing = []
    for document in documents(root):
        for line, raw in links(document.read_text(encoding="utf-8")):
            path = relative_path(raw)
            if path is None:
                continue
            checked += 1
            # Do not read or report private destinations outside the checkout.
            target = (document.parent / path).resolve()
            if not target.is_relative_to(root.resolve()) or not target.exists():
                missing.append((document.relative_to(root).as_posix(), line, raw))
    return checked, missing


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=ROOT, help="repository directory (defaults to this checkout)")
    args = parser.parse_args()
    checked, missing = audit(args.root)
    for source, line, raw in missing:
        print(f"{source}:{line}: missing or outside repository: {raw}")
    print(f"Checked {checked} local destinations; {len(missing)} missing or outside repository.")
    return int(bool(missing))


if __name__ == "__main__":
    raise SystemExit(main())
