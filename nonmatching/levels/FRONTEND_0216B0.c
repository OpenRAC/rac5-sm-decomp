/* FRONTEND.REL:0x0216B0: Ghidra body 128 bytes.
 * Pinned pure C links 128 bytes and first differs at +4.
 * Recheck the cleared record layout and frontend register saves. No matching credit.
 */
extern int D_0003284C;
extern char D_001EC1E8[];
extern char D_001ECA00[];
extern void *memset(void *, int, unsigned int);

int func_0216B0(unsigned int index)
{
    int selected;
    if (index >= 8) {
        return 0;
    }
    memset(D_001EC1E8 + index * 0x824, 0, 0x824);
    selected = index == D_0003284C;
    *(int *)(D_001ECA00 + index * 0x824) = 0;
    if (selected) {
        D_0003284C = -1;
    }
    return 1;
}
