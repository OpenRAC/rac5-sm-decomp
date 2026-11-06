/* LEVEL_19.REL:0x079C98, bounded 64-byte retail body.
 * Pinned C links 64 bytes; first difference at body byte +24.
 * The conditional byte conversion differs in branch-likely scheduling. Reopen with the original condition expression or a qualified compiler route.
 */
extern int func_0279E0(int);

unsigned int func_079C98(char *record)
{
    int state = func_0279E0(4);
    unsigned int value = (unsigned char)record[8];
    if (state == 0) return value;
    return 0xffu - value;
}
