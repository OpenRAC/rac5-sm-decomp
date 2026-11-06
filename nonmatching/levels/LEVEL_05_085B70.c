/* LEVEL_05.REL:0x085B70, bounded 64-byte retail body.
 * Pinned C links 64 bytes; first difference at body byte +24.
 * The conditional byte conversion differs in branch-likely scheduling. Reopen with the original condition expression or a qualified compiler route.
 */
extern int func_029068(int);

unsigned int func_085B70(char *record)
{
    int state = func_029068(4);
    unsigned int value = (unsigned char)record[10];
    if (state == 0) return value;
    return 0xffu - value;
}
