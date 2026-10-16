/* _sceSifSetDma 0x01ed1020..0x01ed1030 (16 bytes).
 *
 * Interval is a run of IOP syscall stubs (16 bytes each):
 * `addiu $v1, $zero, N; syscall 0; jr $ra; nop`.
 * Only _sceSifSetDma carries a retail symbol; the stubs that follow it in the
 * interval are unnamed in config/boot/symbols.tsv and are emitted here
 * under address-derived labels so the interval stays byte-exact.
 * Syscall number travels in $v1; $a0-$a3 pass through untouched.
 */

/* 0x01ed1020  syscall 0x77 */
void _sceSifSetDma(int a0) {
    __asm__ __volatile__("addiu $3, $0, 0x77\n\tsyscall 0" ::: "$3");
}
