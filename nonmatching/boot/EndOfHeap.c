/* EndOfHeap 0x01ed0c40..0x01ed0c60 (32 bytes).
 *
 * Interval is a run of IOP syscall stubs (16 bytes each):
 * `addiu $v1, $zero, N; syscall 0; jr $ra; nop`.
 * Only EndOfHeap carries a retail symbol; the stubs that follow it in the
 * interval are unnamed in config/boot/symbols.tsv and are emitted here
 * under address-derived labels so the interval stays byte-exact.
 * Syscall number travels in $v1; $a0-$a3 pass through untouched.
 */

/* 0x01ed0c40  syscall 0x3E */
void EndOfHeap(int a0) {
    __asm__ __volatile__("addiu $3, $0, 0x3E\n\tsyscall 0" ::: "$3");
}

/* 0x01ed0c50  syscall 0x3F */
void func_01ED0C50(int a0) {
    __asm__ __volatile__("addiu $3, $0, 0x3F\n\tsyscall 0" ::: "$3");
}
