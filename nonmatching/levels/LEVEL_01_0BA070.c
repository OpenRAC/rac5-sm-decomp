/* LEVEL_01.REL:0x0BA070: 20 reviewed USA placements.
 * Ghidra body: 176 bytes; pinned C links 156 bytes and first differs at +0.
 * The staged record reset uses a shorter control path. Reopen with the record field layout and loop bound evidence.
 * This source has no matching credit.
 */
int func_0BA070(char *record)
{
    unsigned int index;
    int offset;
    unsigned int next;
    int *entry;
    if (*(int *)(record + 0x30) != 1)
        return 0;
    index = *(unsigned int *)(record + 0x38);
    if (index < 4) {
        offset = index * 0x30;
        do {
            index++;
            entry = (int *)(*(char **)(record + 0x2c) + offset);
            entry[2] = -1;
            entry[5] = -1;
            entry[4] = 0;
            entry[0] = 0;
            offset += 0x30;
            *(char *)(entry + 3) = 0;
            entry[1] = -1;
        } while (index < 4);
    }
    next = *(unsigned int *)(record + 0x2c) + 0xe4;
    (*(int *)(record + 0x34))++;
    *(unsigned int *)(record + 0x2c) = next;
    if (next <= *(unsigned int *)(record + 0x28)) {
        *(int *)(record + 0x30) = 0;
        return 1;
    }
    *(unsigned int *)(record + 0x2c) = *(unsigned int *)(record + 0x28);
    return 0;
}
