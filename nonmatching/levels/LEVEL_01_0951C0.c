/* LEVEL_01.REL:0x0951C0: 20 reviewed USA placements.
 * Ghidra body: 172 bytes; pinned C links 172 bytes and first differs at +1.
 * The nested table cleanup differs in its first pointer registers. Reopen with cell and linked-record types.
 * This source has no matching credit.
 */
void func_0951C0(int *state)
{
    int count = state[0] * state[1];
    int index;
    for (index = 0; index < count; index++) {
        char *cell = (char *)(unsigned int)state[0x18] + index * 8;
        unsigned int links = *(unsigned short *)(cell + 6);
        unsigned int table = *(unsigned short *)(cell + 4);
        unsigned int j;
        for (j = 0; j < links; j++) {
            char *record = (char *)(unsigned int)state[0x19] +
                           table * 0x10 + j * 0x10;
            **(unsigned short **)(record + 0x0c) = 0xffff;
        }
        {
            char *node = *(char **)cell;
            while (node != 0) {
                *(int *)(node + 0x14) = 0;
                node = *(char **)node;
            }
        }
        *(int *)cell = 0;
        *(unsigned short *)(cell + 6) = 0;
    }
}
