"""Zero alignment padding at the end of a range of R5900 code (little-endian words).

The linker aligns the next function with zero words, which are not code. A zero
word right after a branch or jump is that instruction's delay slot (a `nop`), so
it stays code.
"""

from __future__ import annotations

ZERO_WORD = bytes(4)


def transfers_control(word: int) -> bool:
    """True for a branch or jump, whose next word is its delay slot."""
    opcode = word >> 26
    if opcode == 0x00:   # SPECIAL: jr, jalr
        return word & 0x3F in (0x08, 0x09)
    if opcode == 0x01:   # REGIMM: bltz, bgez and their likely and linking forms
        return (word >> 16) & 0x1F in (0x00, 0x01, 0x02, 0x03, 0x10, 0x11, 0x12, 0x13)
    if opcode in (0x10, 0x11, 0x12):   # branch on coprocessor 0, 1 or 2 condition
        return (word >> 21) & 0x1F == 0x08
    # j, jal, beq, bne, blez, bgtz and the likely forms of the four branches
    return opcode in (0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x14, 0x15, 0x16, 0x17)


def trailing_zero_padding(data: bytes, start: int, end: int) -> int:
    """The bytes of trailing zero words in data[start:end] that are padding."""
    cursor = end
    while cursor - 4 >= start and data[cursor - 4:cursor] == ZERO_WORD:
        cursor -= 4
    if (start < cursor < end
            and transfers_control(int.from_bytes(data[cursor - 4:cursor], "little"))):
        cursor += 4
    return end - cursor
