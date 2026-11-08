/* LEVEL_01.REL:0x1C49D0: reviewed 160-byte candidate.
 * pinned C with gnu-ee-trial links 152 bytes; first differs at +52.
 * Retry: Recover the initial item-base load through a temporary and the loop-entry
 * schedule; current C links 152 of 160 bytes.
 * No matching credit.
 */
extern int func_084B48(void *, void *, void *);

int func_1C49D0(char *context, char *argument)
{
    int found = 0;
    unsigned int index;
    void **items = *(void ***)(context + 0x54);
    for (index = 0; index < *(unsigned char *)(context + 0x45); index++, items++) {
        void *item = *items;
        if (item != 0 && (unsigned char)func_084B48(item, argument, argument + 8))
            found = 1;
    }
    return found;
}
