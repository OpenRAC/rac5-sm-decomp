/* Sony libkernel syscall stubs, retail interval 0x01ED0860..0x01ED0880 (32 bytes).
 * symbols.tsv labels only the first half (SetGsCrt); with end_source=next_label the
 * interval also spans the unlabelled stub at 0x01ED0870 (syscall 3 = func_01ED0870).
 * Both stubs are emitted so the whole interval is byte-exact.
 *   addiu $3,$0,0x02 ; syscall ; jr $ra ; nop   (SetGsCrt)
 *   addiu $3,$0,0x03 ; syscall ; jr $ra ; nop   (func_01ED0870)
 */
int SetGsCrt(int interlace, int pal, int mode) {
    __asm__ volatile("addiu $3, $0, 0x02\n\tsyscall" : : : "$3", "$2", "memory");
}

int func_01ED0870(int mode) {
    __asm__ volatile("addiu $3, $0, 0x03\n\tsyscall" : : : "$3", "$2", "memory");
}
