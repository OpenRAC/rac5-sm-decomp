/* Deci2Call 0x01ed1090..0x01ed10c0 (48 bytes).
 *
 * Interval is a run of IOP syscall stubs (16 bytes each):
 * `addiu $v1, $zero, N; syscall 0; jr $ra; nop`.
 * Only Deci2Call carries a retail symbol; the stubs that follow it in the
 * interval are unnamed in config/boot/symbols.tsv and are emitted here
 * under address-derived labels so the interval stays byte-exact.
 * Syscall number travels in $v1; $a0-$a3 pass through untouched.
 */

/* 0x01ed1090  syscall 0x7C */
void Deci2Call(int a0) {
    __asm__ __volatile__("addiu $3, $0, 0x7C\n\tsyscall 0" ::: "$3");
}

/* 0x01ed10a0  syscall 0x7D */
void func_01ED10A0(int a0) {
    __asm__ __volatile__("addiu $3, $0, 0x7D\n\tsyscall 0" ::: "$3");
}

/* 0x01ed10b0  syscall 0x7E */
void func_01ED10B0(int a0) {
    __asm__ __volatile__("addiu $3, $0, 0x7E\n\tsyscall 0" ::: "$3");
}
