/* Sony libkernel syscall stubs, retail interval 0x01ED0A80..0x01ED0AA0 (32 bytes).
 * symbols.tsv labels only the first half (_StartThread); the next-label interval
 * also spans the unlabelled stub at 0x01ED0A90 (syscall 0x23 = StartThreadArgs).
 *   addiu $3,$0,0x22 ; syscall ; jr $ra ; nop   (_StartThread)
 *   addiu $3,$0,0x23 ; syscall ; jr $ra ; nop   (func_01ED0A90)
 */
int _StartThread(void *param) {
    __asm__ volatile("addiu $3, $0, 0x22\n\tsyscall" : : : "$3", "$2", "memory");
}

int func_01ED0A90(void *param) {
    __asm__ volatile("addiu $3, $0, 0x23\n\tsyscall" : : : "$3", "$2", "memory");
}
