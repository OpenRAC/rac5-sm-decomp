/* LEVEL_01.REL:0x095128: 20 reviewed USA placements.
 * Ghidra body: 148 bytes; pinned C links 148 bytes and first differs at +0.
 * The grid-link initializer has the right size but loads dimensions and counters into different registers. Reopen with its header layout and loop roles.
 * This source has no matching credit.
 */
void func_095128(int *state, char *cells, long long unused, char *links)
{
    int count = state[0] * state[1];
    int total = 0;
    int index;
    state[0x18] = (int)cells;
    state[0x19] = (int)links;
    for (index = 0; index < count; index++) {
        char *cell = cells + index * 8;
        unsigned int number = *(unsigned short *)(cell + 6);
        unsigned int j;
        for (j = 0; j < number; j++) {
            *(unsigned short *)(links + total * 0x10 + j * 0x10 + 0x0a) = index;
        }
        *(unsigned short *)(cell + 4) = total;
        *(unsigned short *)(cell + 6) = 0;
        total += number;
        *(int *)cell = 0;
    }
    *(unsigned short *)(cells + count * 8 + 4) = total;
    *(unsigned short *)(cells + count * 8 + 6) = 0;
    *(int *)(cells + count * 8) = 0;
}
