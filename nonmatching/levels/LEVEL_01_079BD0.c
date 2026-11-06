/* LEVEL_01.REL:0x079BD0: Ghidra body 72 bytes.
 * Pinned pure C links 72 bytes and first differs at +6.
 * Recheck global count and table-pointer register assignment. No matching credit.
 */
extern unsigned int D_001F6118;
extern int D_0023A4B0[];

int func_079BD0(int wanted)
{
    unsigned int index = 0;
    if (D_001F6118 != 0) {
        int *item = D_0023A4B0;
        do {
            index++;
            if (*item == wanted) {
                return 1;
            }
            item += 6;
        } while (index < D_001F6118);
    }
    return 0;
}
