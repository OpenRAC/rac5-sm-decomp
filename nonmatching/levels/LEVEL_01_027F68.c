/* LEVEL_01.REL:0x027F68: reviewed 136-byte candidate.
 * pinned C with gnu-ee-trial links 140 bytes; first differs at +24.
 * Retry: Recover the table-base hoist and index allocation without an extra linked
 * word.
 * No matching credit.
 */
/* LEVEL_01.REL:0x027F68: useful C candidate, no matching credit.
   Reopen when: Recover the table-base hoist and index allocation without an extra linked word. */
extern int func_028BD8(void);
extern char D_001F3FD0[];

void *func_027F68(unsigned int key)
{
    int count = func_028BD8();
    int last = count - 1;
    unsigned int index = 0;
    if (last != 0) {
        unsigned int next = index + 1;
        do {
            unsigned int limit = *(unsigned int *)(D_001F3FD0 + next * 12 + 4);
            if (key < limit)
                return D_001F3FD0 + index * 12;
            index = next;
            next = index + 1;
        } while (index < (unsigned int)last);
    }
    return D_001F3FD0 + last * 12;
}
