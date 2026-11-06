/* LEVEL_06.REL:0x081050, bounded 64-byte retail body.
 * Pinned C links 64 bytes; first difference at body byte +24.
 * The conditional byte conversion differs in branch-likely scheduling. Reopen with the original condition expression or a qualified compiler route.
 */
extern int func_0287D8(int);

unsigned int func_081050(char *record)
{
    int state = func_0287D8(4);
    unsigned int value = (unsigned char)record[8];
    if (state == 0) return value;
    return 0xffu - value;
}
