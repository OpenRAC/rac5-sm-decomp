/* LEVEL_18.REL:0x079130, bounded 64-byte retail body.
 * Pinned C links 64 bytes; first difference at body byte +24.
 * The conditional byte conversion differs in branch-likely scheduling. Reopen with the original condition expression or a qualified compiler route.
 */
extern int func_0273E8(int);

unsigned int func_079130(char *record)
{
    int state = func_0273E8(4);
    unsigned int value = (unsigned char)record[8];
    if (state == 0) return value;
    return 0xffu - value;
}
