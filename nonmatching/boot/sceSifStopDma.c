/* sceSifStopDma 0x01ed0f30..0x01ed0f70 (64 bytes).
 *
 * Interval is a run of IOP syscall stubs (16 bytes each):
 * `addiu $v1, $zero, N; syscall 0; jr $ra; nop`.
 * Only sceSifStopDma carries a retail symbol; the stubs that follow it in the
 * interval are unnamed in config/boot/symbols.tsv and are emitted here
 * under address-derived labels so the interval stays byte-exact.
 * Syscall number travels in $v1; $a0-$a3 pass through untouched.
 */

/* 0x01ed0f30  syscall 0x6B */
void sceSifStopDma(int a0) {
    __asm__ __volatile__("addiu $3, $0, 0x6B\n\tsyscall 0" ::: "$3");
}

/* 0x01ed0f40  syscall 0x6C */
void func_01ED0F40(int a0) {
    __asm__ __volatile__("addiu $3, $0, 0x6C\n\tsyscall 0" ::: "$3");
}

/* 0x01ed0f50  syscall 0x6D */
void func_01ED0F50(int a0) {
    __asm__ __volatile__("addiu $3, $0, 0x6D\n\tsyscall 0" ::: "$3");
}

/* 0x01ed0f60  syscall 0x6E */
void func_01ED0F60(int a0) {
    __asm__ __volatile__("addiu $3, $0, 0x6E\n\tsyscall 0" ::: "$3");
}
