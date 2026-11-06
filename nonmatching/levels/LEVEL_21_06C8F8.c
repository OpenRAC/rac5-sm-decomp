/* LEVEL_21.REL:0x06C8F8, bounded 64-byte retail body.
 * Pinned C links 64 bytes; first difference at body byte +24.
 * The conditional byte conversion differs in branch-likely scheduling. Reopen with the original condition expression or a qualified compiler route.
 */
extern int func_023BC8(int);

unsigned int func_06C8F8(char *record)
{
    int state = func_023BC8(4);
    unsigned int value = (unsigned char)record[10];
    if (state == 0) return value;
    return 0xffu - value;
}
