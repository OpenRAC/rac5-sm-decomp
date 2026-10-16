/* Sony libkernel syscall stubs, retail interval 0x01ED0880..0x01ED08A0 (32 bytes).
 * symbols.tsv labels only the first half (_Exit); the next-label interval also
 * spans the unlabelled stub at 0x01ED0890 (syscall 5 = func_01ED0890).
 *   addiu $3,$0,0x04 ; syscall ; jr $ra ; nop   (_Exit)
 *   addiu $3,$0,0x05 ; syscall ; jr $ra ; nop   (func_01ED0890)
 */
void _Exit(int status) {
    __asm__ volatile("addiu $3, $0, 0x04\n\tsyscall" : : : "$3", "$2", "memory");
}

void func_01ED0890(void *entry, void *gp, int argc, char **argv) {
    __asm__ volatile("addiu $3, $0, 0x05\n\tsyscall" : : : "$3", "$2", "memory");
}
