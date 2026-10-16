/* Sony libkernel syscall stub, retail interval (16 bytes):
 *   addiu $3,$0,0x20 ; syscall ; jr $ra ; nop
 */
int CreateThread(void *param) {
    __asm__ volatile("addiu $3, $0, 0x20\n\tsyscall" : : : "$3", "$2", "memory");
}
