/* GsPutIMR 0x01ed0fa0..0x01ed0fd0 (48 bytes).
 *
 * Interval is a run of IOP syscall stubs (16 bytes each):
 * `addiu $v1, $zero, N; syscall 0; jr $ra; nop`.
 * Only GsPutIMR carries a retail symbol; the stubs that follow it in the
 * interval are unnamed in config/boot/symbols.tsv and are emitted here
 * under address-derived labels so the interval stays byte-exact.
 * Syscall number travels in $v1; $a0-$a3 pass through untouched.
 */

/* 0x01ed0fa0  syscall 0x71 */
void GsPutIMR(int a0) {
    __asm__ __volatile__("addiu $3, $0, 0x71\n\tsyscall 0" ::: "$3");
}

/* 0x01ed0fb0  syscall -0x71 */
void func_01ED0FB0(int a0) {
    __asm__ __volatile__("addiu $3, $0, -0x71\n\tsyscall 0" ::: "$3");
}

/* 0x01ed0fc0  syscall 0x72 */
void func_01ED0FC0(int a0) {
    __asm__ __volatile__("addiu $3, $0, 0x72\n\tsyscall 0" ::: "$3");
}
