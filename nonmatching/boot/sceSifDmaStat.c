/* sceSifDmaStat 0x01ed1000..0x01ed1020 (32 bytes).
 *
 * Interval is a run of IOP syscall stubs (16 bytes each):
 * `addiu $v1, $zero, N; syscall 0; jr $ra; nop`.
 * Only sceSifDmaStat carries a retail symbol; the stubs that follow it in the
 * interval are unnamed in config/boot/symbols.tsv and are emitted here
 * under address-derived labels so the interval stays byte-exact.
 * Syscall number travels in $v1; $a0-$a3 pass through untouched.
 */

/* 0x01ed1000  syscall 0x76 */
void sceSifDmaStat(int a0) {
    __asm__ __volatile__("addiu $3, $0, 0x76\n\tsyscall 0" ::: "$3");
}

/* 0x01ed1010  syscall -0x76 */
void func_01ED1010(int a0) {
    __asm__ __volatile__("addiu $3, $0, -0x76\n\tsyscall 0" ::: "$3");
}
