/* sceSifSendCmd 0x01ED3B10..0x01ED3B50 (64 bytes, body 60 + 4 zero fill).
 *   daddu $v0, $a2, $zero
 *   daddu $v1, $a3, $zero
 *   daddu $t3, $t0, $zero
 *   addiu $sp, $sp, -0x10
 *   daddu $t2, $t1, $zero
 *   daddu $a2, $a1, $zero
 *   sd    $ra, 0x0($sp)
 *   daddu $a3, $v0, $zero
 *   daddu $t0, $v1, $zero
 *   daddu $t1, $t3, $zero
 *   jal   func_1ED39D8
 *   daddu $a1, $zero, $zero        (delay slot)
 *   ld    $ra, 0x0($sp)
 *   jr    $ra
 *   addiu $sp, $sp, 0x10           (delay slot)
 *   nop
 * Sends a command packet with the dma/extra arguments shuffled into the
 * 7-argument worker; argument 2 of the worker is always 0. */
extern int func_1ED39D8(int, int, int, int, int, int, int);

int sceSifSendCmd(int a0, int a1, int a2, int a3, int t0, int t1) {
    return func_1ED39D8(a0, 0, a1, a2, a3, t0, t1);
}
