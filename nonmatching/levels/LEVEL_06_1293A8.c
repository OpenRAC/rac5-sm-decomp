/* LEVEL_06.REL:0x1293A8, bounded 64-byte retail body.
 * Pinned C links 60 bytes; first difference at body byte +8.
 * The flag set/clear conditional lacks the retail branch-likely scheduling. Reopen with control-flow evidence or a qualified compiler route.
 */
extern char *D_001F5C4C;

int func_1293A8(unsigned int mask, int set)
{
    char *record = D_001F5C4C;
    unsigned int value;
    if (record == 0) return 0;
    value = *(unsigned int *)(record + 0x94);
    if (set == 0) value &= ~mask;
    else value |= mask;
    *(unsigned int *)(record + 0x94) = value;
    return 1;
}
