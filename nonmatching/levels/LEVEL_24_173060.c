/* USA LEVEL_24.REL:0x173060, 104-byte candidate.
 * Representative measured with pinned/gnu-ee-trial: 104 linked bytes; first differing word +0x4.
 * Unaccepted; no matching credit. Recover the original list aggregate and entry setup order; the first retained version differs in entry scheduling and one address operand order.
 */
void func_173060(char *object, void *value)
{
    char *list = *(char **)(object + 0x58);
    unsigned int i = 0;
    void **p = (void **)(list + 8);
    void **base = p;
    while (i < *(unsigned int *)(list + 4)) {
        if (*p == value) {
            unsigned int last = *(unsigned int *)(list + 4) - 1;
            if (i < last)
                *p = base[last];
            --*(unsigned int *)(list + 4);
            return;
        }
        ++i;
        ++p;
    }
}
