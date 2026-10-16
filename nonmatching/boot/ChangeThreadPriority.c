/* ChangeThreadPriority 0x01ed0af0..0x01ed0b10 (32 bytes).
 *
 * Interval is a run of IOP syscall stubs (16 bytes each):
 * `addiu $v1, $zero, N; syscall 0; jr $ra; nop`.
 * Only ChangeThreadPriority carries a retail symbol; the stubs that follow it in the
 * interval are unnamed in config/boot/symbols.tsv and are emitted here
 * under address-derived labels so the interval stays byte-exact.
 * Syscall number travels in $v1; $a0-$a3 pass through untouched.
 */

/* 0x01ed0af0  syscall 0x29 */
void ChangeThreadPriority(int a0) {
    __asm__ __volatile__("addiu $3, $0, 0x29\n\tsyscall 0" ::: "$3");
}

/* 0x01ed0b00  syscall -0x2A */
void func_01ED0B00(int a0) {
    __asm__ __volatile__("addiu $3, $0, -0x2A\n\tsyscall 0" ::: "$3");
}
