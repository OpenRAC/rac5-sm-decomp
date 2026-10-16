/* Sony libkernel syscall stub, retail 0x01ED0940 (16 bytes):
 *   addiu $3,$0,0x10 ; syscall ; jr $ra ; nop
 * int AddIntcHandler(int cause, int (*handler)(int), void *arg, int next);
 */
int AddIntcHandler(int cause, int (*handler)(int), void *arg, int next) {
    __asm__ volatile("addiu $3, $0, 0x10\n\tsyscall" : : : "$3", "$2", "memory");
}
