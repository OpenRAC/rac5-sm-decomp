/* RotateThreadReadyQueue 0x01ed0b10..0x01ed0b50 (64 bytes).
 *
 * Interval is a run of IOP syscall stubs (16 bytes each):
 * `addiu $v1, $zero, N; syscall 0; jr $ra; nop`.
 * Only RotateThreadReadyQueue carries a retail symbol; the stubs that follow it in the
 * interval are unnamed in config/boot/symbols.tsv and are emitted here
 * under address-derived labels so the interval stays byte-exact.
 * Syscall number travels in $v1; $a0-$a3 pass through untouched.
 */

/* 0x01ed0b10  syscall 0x2B */
void RotateThreadReadyQueue(int a0) {
    __asm__ __volatile__("addiu $3, $0, 0x2B\n\tsyscall 0" ::: "$3");
}

/* 0x01ed0b20  syscall -0x2C */
void func_01ED0B20(int a0) {
    __asm__ __volatile__("addiu $3, $0, -0x2C\n\tsyscall 0" ::: "$3");
}

/* 0x01ed0b30  syscall 0x2D */
void func_01ED0B30(int a0) {
    __asm__ __volatile__("addiu $3, $0, 0x2D\n\tsyscall 0" ::: "$3");
}

/* 0x01ed0b40  syscall -0x2E */
void func_01ED0B40(int a0) {
    __asm__ __volatile__("addiu $3, $0, -0x2E\n\tsyscall 0" ::: "$3");
}
