/* FRONTEND.REL:0x0249D8: Ghidra body 140 bytes.
 * Pinned pure C links 128 bytes and first differs at +0.
 * Recheck parameter widths and the optional indirect record source. No matching credit.
 */
extern int func_0264F8(int, int);
extern int *func_0248D0(unsigned short, int, int);

int func_0249D8(int first, int second, int third)
{
    int found = func_0264F8(first, third);
    if (found != 0) {
        int *entry = (int *)(unsigned int)found;
        unsigned short index = *(unsigned short *)((char *)entry + 0x298);
        if (*(char *)((unsigned int)second + index + 0x29c) == 0) {
            *entry = *(int *)(unsigned int)second;
        } else {
            int *source = func_0248D0(index, second, 0);
            *entry = *source;
        }
        *entry += entry[2];
    }
    return found;
}
