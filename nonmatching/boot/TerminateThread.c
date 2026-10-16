/* TerminateThread 0x01ED0AB0..0x01ED0AF0 (64 bytes).
 *
 * Interval layout (NextLabel = ChangeThreadPriority at 0x01ED0AF0): four IOP
 * syscall stubs of 16 bytes each:
 *   0x01ED0AB0  syscall  0x25  <- the only one named in the retail symtab
 *   0x01ED0AC0  syscall -0x26
 *   0x01ED0AD0  syscall  0x27
 *   0x01ED0AE0  syscall  0x28
 * The three trailing stubs carry no retail symbol (absent from
 * config/boot/symbols.tsv), so they are emitted under address-derived labels
 * to keep the interval byte-exact; they are not retail names.
 *
 * Syscall number travels in $v1, arguments are passed through untouched.
 */

void TerminateThread(int a0) {
    __asm__ __volatile__("addiu $3, $0, 0x25\n\tsyscall 0" ::: "$3");
}

void func_01ED0AC0(int a0) {
    __asm__ __volatile__("addiu $3, $0, -0x26\n\tsyscall 0" ::: "$3");
}

void func_01ED0AD0(int a0) {
    __asm__ __volatile__("addiu $3, $0, 0x27\n\tsyscall 0" ::: "$3");
}

void func_01ED0AE0(int a0) {
    __asm__ __volatile__("addiu $3, $0, 0x28\n\tsyscall 0" ::: "$3");
}
