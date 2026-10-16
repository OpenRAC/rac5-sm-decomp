/* sn_reg_frame 0x01EDC1B0..0x01EDC1C8 (24 bytes, body 20 + 4 zero fill).
 *   lui   $a0, 0x1F0
 *   lui   $a1, 0x1FF
 *   addiu $a0, $a0, 0x6E0
 *   j     __register_frame_info_table      (tail call)
 *   addiu $a1, $a1, -0x51D0                (delay slot)
 *   nop
 * Registers the .eh_frame table of the boot image with libgcc.
 *
 * Hand-written tail-call stub, emitted as assembly for the same reason as
 * sn_dereg_frame.c. */
extern char eh_frame_begin[];
extern char eh_frame_object[];

__asm__(".text\n"
        ".globl sn_reg_frame\n"
        ".ent sn_reg_frame\n"
        ".set noreorder\n"
        "sn_reg_frame:\n"
        "\tlui $4, %hi(eh_frame_begin)\n"
        "\tlui $5, %hi(eh_frame_object)\n"
        "\taddiu $4, $4, %lo(eh_frame_begin)\n"
        "\tj __register_frame_info_table\n"
        "\taddiu $5, $5, %lo(eh_frame_object)\n"
        ".set reorder\n"
        ".end sn_reg_frame\n");
