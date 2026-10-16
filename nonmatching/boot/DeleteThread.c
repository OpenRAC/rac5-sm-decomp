/* Sony libkernel syscall stub, retail interval (16 bytes):
 *   addiu $3,$0,0x21 ; syscall ; jr $ra ; nop
 */
int DeleteThread(int thid) {
    __asm__ volatile("addiu $3, $0, 0x21\n\tsyscall" : : : "$3", "$2", "memory");
}
