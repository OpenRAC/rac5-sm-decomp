/* LEVEL_01.REL:0x089CB8: reviewed 136-byte candidate.
 * pinned C with gnu-ee-trial links 136 bytes; first differs at +30.
 * Retry: Recover metadata-pointer register lifetime and the branch-likely exit;
 * repeated semantic forms keep the same register permutation.
 * No matching credit.
 */
extern void func_08C430(void);

void func_089CB8(char *state)
{
    int index, offset;
    if (state == 0)
        return;
    if (*(int *)(state + 0x10) == 0)
        func_08C430();
    if (*(unsigned char *)(*(char **)(state + 4) + 0x2f) == 0)
        return;
    index = 0;
    offset = 0;
    do {
        char *base = *(char **)(*(char **)(state + 0x10) + 8);
        *(int *)(base + offset + 12) = 0;
        base = *(char **)(*(char **)(state + 0x10) + 8);
        *(int *)(base + offset) = 0;
        index++;
        offset += 0x70;
    } while (index < *(unsigned char *)(*(char **)(state + 4) + 0x2f));
}
