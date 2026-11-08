/* LEVEL_02.REL:0x03EA90: reviewed 84-byte candidate.
 * pinned C with gnu-ee-trial links 84 bytes; first differs at +2.
 * Retry: Recover the state-pointer register allocation (retail v1 versus compiled a0)
 * while preserving the 84-byte body; five qualified cc1 alternatives retain the +2
 * difference.
 * No matching credit.
 */
int func_03EA90(char *object)
{
    int state;
    char *owner;
    char *table;
    unsigned int kind;
    unsigned int value;
    state = *(int *)(object + 0x5c8);
    if (state == 0)
        return 0;
    kind = *(unsigned char *)(state + 0x44);
    owner = *(char **)(state + 0x40);
    table = *(char **)(owner + 4);
    value = *(unsigned int *)(table + kind * 0x34 + 0x20);
    if (value == 0x0478fe9aU)
        return 1;
    return value == 0x2df5e520U;
}
