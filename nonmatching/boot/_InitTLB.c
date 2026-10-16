/* _InitTLB 0x01ed10d0..0x01ed10e0 (16 bytes).
 *
 * Interval is a run of IOP syscall stubs (16 bytes each):
 * `addiu $v1, $zero, N; syscall 0; jr $ra; nop`.
 * Only _InitTLB carries a retail symbol; the stubs that follow it in the
 * interval are unnamed in config/boot/symbols.tsv and are emitted here
 * under address-derived labels so the interval stays byte-exact.
 * Syscall number travels in $v1; $a0-$a3 pass through untouched.
 */

/* 0x01ed10d0  syscall 0x82 */
void _InitTLB(int a0) {
    __asm__ __volatile__("addiu $3, $0, 0x82\n\tsyscall 0" ::: "$3");
}
