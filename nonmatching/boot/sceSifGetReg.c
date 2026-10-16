/* sceSifGetReg 0x01ed1070..0x01ed1090 (32 bytes).
 *
 * Interval is a run of IOP syscall stubs (16 bytes each):
 * `addiu $v1, $zero, N; syscall 0; jr $ra; nop`.
 * Only sceSifGetReg carries a retail symbol; the stubs that follow it in the
 * interval are unnamed in config/boot/symbols.tsv and are emitted here
 * under address-derived labels so the interval stays byte-exact.
 * Syscall number travels in $v1; $a0-$a3 pass through untouched.
 */

/* 0x01ed1070  syscall 0x7A */
void sceSifGetReg(int a0) {
    __asm__ __volatile__("addiu $3, $0, 0x7A\n\tsyscall 0" ::: "$3");
}

/* 0x01ed1080  syscall 0x7B */
void func_01ED1080(int a0) {
    __asm__ __volatile__("addiu $3, $0, 0x7B\n\tsyscall 0" ::: "$3");
}
