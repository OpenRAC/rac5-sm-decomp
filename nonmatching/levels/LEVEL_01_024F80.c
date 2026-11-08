/* LEVEL_01.REL:0x024F80: reviewed 132-byte candidate.
 * pinned C with gnu-ee-trial links 132 bytes; first differs at +66.
 * Retry: Find a source or qualified allocator that loads the list count into v1 then
 * copies it to a1 after the zero guard.
 * No matching credit.
 */
extern int func_024EC8(unsigned int value, long long fallback);
extern char *D_001F3FAC;
int func_024F80(unsigned int value)
{
    unsigned int index, count;
    char *context;
    unsigned int *entry;
    if (func_024EC8(value, -1) == 0)
        goto scan;
    return 0;
found:
    return 1;
scan:
    if (value < 25) {
        context = D_001F3FAC;
        count = *(unsigned int *)(context + 0xe4);
        if (count != 0) {
            index = 0;
            entry = (unsigned int *)(context + 0x80);
            do {
                if (*entry == value)
                    goto found;
                index++;
                entry++;
            } while (index < count);
        }
    }
    return 0;
}
