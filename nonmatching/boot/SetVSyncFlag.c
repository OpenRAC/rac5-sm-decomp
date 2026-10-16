/* SetVSyncFlag 0x01ed0fd0..0x01ed1000 (48 bytes).
 *
 * Interval is a run of IOP syscall stubs (16 bytes each):
 * `addiu $v1, $zero, N; syscall 0; jr $ra; nop`.
 * Only SetVSyncFlag carries a retail symbol; the stubs that follow it in the
 * interval are unnamed in config/boot/symbols.tsv and are emitted here
 * under address-derived labels so the interval stays byte-exact.
 * Syscall number travels in $v1; $a0-$a3 pass through untouched.
 */

/* 0x01ed0fd0  syscall 0x73 */
void SetVSyncFlag(int a0) {
    __asm__ __volatile__("addiu $3, $0, 0x73\n\tsyscall 0" ::: "$3");
}

/* 0x01ed0fe0  syscall 0x74 */
void func_01ED0FE0(int a0) {
    __asm__ __volatile__("addiu $3, $0, 0x74\n\tsyscall 0" ::: "$3");
}

/* 0x01ed0ff0  syscall 0x75 */
void func_01ED0FF0(int a0) {
    __asm__ __volatile__("addiu $3, $0, 0x75\n\tsyscall 0" ::: "$3");
}
