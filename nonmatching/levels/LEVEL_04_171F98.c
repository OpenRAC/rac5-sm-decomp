/* USA LEVEL_04.REL:0x171F98, 128-byte candidate.
 * Representative measured with pinned/gnu-ee-trial: 128 linked bytes; first differing word +0x0.
 * Unaccepted; no matching credit. Recover the owner/resource aggregate types and first-loop setup; the loop body and result classification currently differ only at entry.
 */
int func_171F98(char *object)
{
    char *resource = *(char **)(object + 0x54);
    char *child = *(char **)resource;
    char *state = *(char **)(child + 0x58);
    int has_two = 0, has_one = 0;
    unsigned int i;
    unsigned int count = *(unsigned char *)(state + 0x44);
    char *entry = state;
    for (i = 0; i < count; ++i, entry += 8) {
        char *a = *(char **)entry;
        char *b = *(char **)(a + 0x40);
        char *c = *(char **)(b + 0x10);
        unsigned int flags = *(unsigned int *)(c + 0x40);
        if (flags & 2)
            has_two = 1;
        else if (flags & 1)
            has_one = 1;
    }
    if (has_one && !has_two)
        return 1;
    if (!has_one)
        return 2;
    return 0;
}
