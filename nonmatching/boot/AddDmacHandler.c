/* Sony libkernel syscall stubs, retail interval 0x01ED0970..0x01ED0990 (32 bytes).
 * symbols.tsv labels only the first half (AddDmacHandler); the next-label interval
 * also spans the unlabelled twin at 0x01ED0980 (same syscall 0x12).
 *   addiu $3,$0,0x12 ; syscall ; jr $ra ; nop   (x2)
 */
int AddDmacHandler(int cause, int (*handler)(int), void *arg, int next) {
    __asm__ volatile("addiu $3, $0, 0x12\n\tsyscall" : : : "$3", "$2", "memory");
}

int func_01ED0980(int cause, int (*handler)(int), void *arg, int next) {
    __asm__ volatile("addiu $3, $0, 0x12\n\tsyscall" : : : "$3", "$2", "memory");
}
