/* LEVEL_01.REL:0x07C7D0: Ghidra body 80 bytes.
 * Pinned pure C links 84 bytes and first differs at +48.
 * Recheck the conditional short decrement and global counter store. No matching credit.
 */
extern int D_001F615C;

void func_07C7D0(char *record)
{
    int value;
    if ((*(unsigned int *)(record + 100) & 6) != 0) {
        value = *(int *)(record + 0x40);
        if (value != 0) {
            --*(short *)(value + 0x42);
        }
    }
    *(unsigned int *)(record + 100) &= ~6U;
    D_001F615C--;
}
