/* LEVEL_01.REL:0x1B6348: 16 USA placements.
 * Ghidra body: 96 bytes; pinned C links 96 bytes and first differs at +5.
 * The five-record state update matches size but allocates a different counter and pointer register set. Reopen with the source record layout and loop variable lifetime.
 * This source has no matching credit.
 */
void func_1B6348(char *record)
{
    char *state = *(char **)(record + 0x58);
    unsigned int index = 0;
    char **objects = (char **)(state + 0x68);
    int *values = (int *)(state + 4);
    char *flag = state + 0x84;
    do {
        char *object = *objects;
        index++;
        if (object != 0 && *flag == 0) {
            object[0x45] = 0x0c;
            *values = -1;
            *flag = 1;
        }
        values = (int *)((char *)values + 0x14);
        flag++;
        objects++;
    } while (index < 5);
}
