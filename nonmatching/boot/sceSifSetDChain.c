/* sceSifSetDChain 0x01ed1040..0x01ed1050 (16 bytes).
 *
 * Interval is a run of IOP syscall stubs (16 bytes each):
 * `addiu $v1, $zero, N; syscall 0; jr $ra; nop`.
 * Only sceSifSetDChain carries a retail symbol; the stubs that follow it in the
 * interval are unnamed in config/boot/symbols.tsv and are emitted here
 * under address-derived labels so the interval stays byte-exact.
 * Syscall number travels in $v1; $a0-$a3 pass through untouched.
 */

/* 0x01ed1040  syscall 0x78 */
void sceSifSetDChain(int a0) {
    __asm__ __volatile__("addiu $3, $0, 0x78\n\tsyscall 0" ::: "$3");
}
