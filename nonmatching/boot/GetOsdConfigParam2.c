/* GetOsdConfigParam2 0x01ed0f70..0x01ed0fa0 (48 bytes).
 *
 * Interval is a run of IOP syscall stubs (16 bytes each):
 * `addiu $v1, $zero, N; syscall 0; jr $ra; nop`.
 * Only GetOsdConfigParam2 carries a retail symbol; the stubs that follow it in the
 * interval are unnamed in config/boot/symbols.tsv and are emitted here
 * under address-derived labels so the interval stays byte-exact.
 * Syscall number travels in $v1; $a0-$a3 pass through untouched.
 */

/* 0x01ed0f70  syscall 0x6F */
void GetOsdConfigParam2(int a0) {
    __asm__ __volatile__("addiu $3, $0, 0x6F\n\tsyscall 0" ::: "$3");
}

/* 0x01ed0f80  syscall 0x70 */
void func_01ED0F80(int a0) {
    __asm__ __volatile__("addiu $3, $0, 0x70\n\tsyscall 0" ::: "$3");
}

/* 0x01ed0f90  syscall -0x70 */
void func_01ED0F90(int a0) {
    __asm__ __volatile__("addiu $3, $0, -0x70\n\tsyscall 0" ::: "$3");
}
