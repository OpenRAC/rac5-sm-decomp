/* sceSifInitRebootNotify 0x01EDA190..0x01EDA1C8 (56 bytes).
 *   lui   $v0, 0x1F0
 *   lui   $v1, 0x1F0
 *   lui   $a0, 0x1FF
 *   sw    $zero, -0x48($v0)              (0x01F0FFB8)
 *   sw    $zero, -0x44($v1)              (0x01F0FFBC)
 *   addiu $a0, $a0, -0x6638              (0x01FE99C8)
 *   daddu $a1, $zero, $zero
 *   j     memset                         (tail call)
 *   addiu $a2, $zero, 0x200              (delay slot)
 *   nop
 * The 40 bytes above are the whole function: it clears two reboot-notify words
 * and tail-calls memset over a 0x200 byte block.
 *
 * Retail is hand-written assembly (an unrolled prologue plus a `j` tail call);
 * the pinned compiler emits `jal` with a frame for any call, so this cannot be
 * expressed in C, and the interval after the nop continues with 16 bytes of
 * unlabelled epilogue fragments that belong to no function.  The body is
 * therefore emitted as assembly and the interval is left not fully covered.
 * The two word symbols are declared one 64K page low so the SN linker's
 * (addr + 0x8000) >> 16 split reproduces retail's `lui 0x1F0` encodings. */
extern char reboot_flag_a[]; /* 0x01F0FFB8, declared at 0x01EFFFB8 */
extern char reboot_flag_b[]; /* 0x01F0FFBC, declared at 0x01EFFFBC */

__asm__(".text\n"
        ".globl sceSifInitRebootNotify\n"
        ".ent sceSifInitRebootNotify\n"
        ".set noreorder\n"
        "sceSifInitRebootNotify:\n"
        "\tlui $2, %hi(reboot_flag_a)\n"
        "\tlui $3, %hi(reboot_flag_b)\n"
        "\tlui $4, %hi(reboot_block)\n"
        "\tsw $0, %lo(reboot_flag_a)($2)\n"
        "\tsw $0, %lo(reboot_flag_b)($3)\n"
        "\taddiu $4, $4, %lo(reboot_block)\n"
        "\tdaddu $5, $0, $0\n"
        "\tj memset\n"
        "\taddiu $6, $0, 0x200\n"
        ".set reorder\n"
        ".end sceSifInitRebootNotify\n");
