/* LEVEL_01.REL:0x080560: Ghidra body 80 bytes.
 * Pinned pure C links 84 bytes and first differs at +6.
 * Recheck the global array base and record stride registers. No matching credit.
 */
extern char *D_00206D90;

int func_080560(int value)
{
    char *table = D_00206D90;
    unsigned int index = 0;
    if (*(unsigned int *)(table + 0x48) != 0) {
        char *item = *(char **)(table + 0x44);
        do {
            index++;
            if (*(int *)(item + 0x5c) == value &&
                (*(unsigned int *)(item + 100) & 1) != 0) {
                return (int)item;
            }
            item += 0x80;
        } while (index < *(unsigned int *)(table + 0x48));
    }
    return 0;
}
