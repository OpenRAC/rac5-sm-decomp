/* SetT2_COUNT 0x01ED92B0..0x01ED92C0 (16 bytes).
 *   daddu $a1, $a0, $zero
 *   lui   $a0, 0xB000
 *   j     SetT2                            (tail call)
 *   ori   $a0, $a0, 0x1000                 (delay slot)
 * Writes the timer 2 counter register (0xB0001000).
 *
 * Hand-written tail-call stub: the pinned compiler emits `jal` for every call
 * (sibling calls are off), so the `j` cannot come out of C. */
__asm__(".text\n"
        ".globl SetT2_COUNT\n"
        ".ent SetT2_COUNT\n"
        ".set noreorder\n"
        "SetT2_COUNT:\n"
        "\tdaddu $5, $4, $0\n"
        "\tlui $4, 0xB000\n"
        "\tj SetT2\n"
        "\tori $4, $4, 0x1000\n"
        ".set reorder\n"
        ".end SetT2_COUNT\n");
