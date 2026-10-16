/* Sony libkernel syscall stub, retail interval (16 bytes):
 *   addiu $3,$0,0x13 ; syscall ; jr $ra ; nop
 */
int RemoveDmacHandler(int cause, int handler) {
    __asm__ volatile("addiu $3, $0, 0x13\n\tsyscall" : : : "$3", "$2", "memory");
}
