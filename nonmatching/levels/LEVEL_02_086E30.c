/* LEVEL_02.REL:0x086E30: reviewed 80-byte candidate.
 * pinned C with gnu-ee-trial links 80 bytes; first differs at +10.
 * Retry: Recover the count/index live range so the count occupies a2 and the loop
 * index a1; all qualified cc1 routes currently swap those registers at +10.
 * No matching credit.
 */
extern char *D_0021BD50;

char *func_086E30(int value)
{
    char *manager = D_0021BD50;
    unsigned int index = 0;
    unsigned int count = *(unsigned int *)(manager + 0x48);
    if (count != 0) {
        char *entry = *(char **)(manager + 0x44);
        do {
            index++;
            if (*(int *)(entry + 0x5c) == value &&
                (*(unsigned int *)(entry + 0x64) & 1) != 0)
                return entry;
            entry += 0x80;
        } while (index < count);
    }
    return 0;
}
