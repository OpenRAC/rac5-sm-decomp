/* SetT2_COMP 0x01ED92D0..0x01ED92E0 (16 bytes).
 *   daddu $a1, $a0, $zero
 *   lui   $a0, 0xB000
 *   j     SetT2                            (tail call)
 *   ori   $a0, $a0, 0x1020                 (delay slot)
 * Writes the timer 2 compare register (0xB0001020).  Hand-written tail-call
 * stub for the same reason as SetT2_COUNT.c. */
__asm__(".text\n"
        ".globl SetT2_COMP\n"
        ".ent SetT2_COMP\n"
        ".set noreorder\n"
        "SetT2_COMP:\n"
        "\tdaddu $5, $4, $0\n"
        "\tlui $4, 0xB000\n"
        "\tj SetT2\n"
        "\tori $4, $4, 0x1020\n"
        ".set reorder\n"
        ".end SetT2_COMP\n");
