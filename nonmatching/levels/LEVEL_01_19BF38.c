/* LEVEL_01.REL:0x19BF38: reviewed 184-byte candidate.
 * pinned C with gnu-ee-trial links 184 bytes; first differs at +26.
 * Retry: Recover the table base plus scaled-index operand order at two sites in the
 * body without changing semantics or adding artificial C.
 * No matching credit.
 */
extern unsigned int D_0020895C;

void func_19BF38(char *object, void *unused, char *state)
{
    char *target = *(char **)(object + 0x54);
    char **table = (char **)(state + 0x10);
    char *entry = table[*(int *)(state + 0x3C)];
    char *node;
    unsigned int amount = *(unsigned char *)(target + 0x19);
    if (*(unsigned int *)(entry + 0x38) <
        amount + *(unsigned int *)(state + 0x40)) {
        *(unsigned char *)(target + 0x20) =
            *(unsigned char *)(entry + 0x38) -
            *(unsigned char *)(state + 0x40);
        *(unsigned int *)(state + 0x40) =
            *(unsigned int *)(table[*(int *)(state + 0x3C)] + 0x38);
    } else {
        *(unsigned char *)(target + 0x20) = amount;
        *(unsigned int *)(state + 0x40) +=
            *(unsigned char *)(target + 0x19);
    }
    node = *(char **)(object + 0x58);
    *(char **)(node + 8) = state;
    *(unsigned int *)(node + 4) |= 1;
    *(unsigned char *)(object + 0x45) = 4;
    *(float *)(object + 0x70) = 2.5f;
    *(unsigned int *)(object + 0x64) |= 0x20;
    *(unsigned int *)(target + 0x1C) = D_0020895C;
}
