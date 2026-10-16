/* _iWakeupThread 0x01ed0ba0..0x01ed0bd0 (48 bytes).
 *
 * Interval is a run of IOP syscall stubs (16 bytes each):
 * `addiu $v1, $zero, N; syscall 0; jr $ra; nop`.
 * Only _iWakeupThread carries a retail symbol; the stubs that follow it in the
 * interval are unnamed in config/boot/symbols.tsv and are emitted here
 * under address-derived labels so the interval stays byte-exact.
 * Syscall number travels in $v1; $a0-$a3 pass through untouched.
 */

/* 0x01ed0ba0  syscall -0x34 */
void _iWakeupThread(int a0) {
    __asm__ __volatile__("addiu $3, $0, -0x34\n\tsyscall 0" ::: "$3");
}

/* 0x01ed0bb0  syscall 0x35 */
void func_01ED0BB0(int a0) {
    __asm__ __volatile__("addiu $3, $0, 0x35\n\tsyscall 0" ::: "$3");
}

/* 0x01ed0bc0  syscall -0x36 */
void func_01ED0BC0(int a0) {
    __asm__ __volatile__("addiu $3, $0, -0x36\n\tsyscall 0" ::: "$3");
}
