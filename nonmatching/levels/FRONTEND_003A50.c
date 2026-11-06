/* FRONTEND.REL:0x003A50: Ghidra body 192 bytes.
 * Pure C with `pinned` links 192 bytes and first differs at +52.
 * Recheck branch direction and call-argument lifetime. No matching credit.
 */
extern char *func_003C18(unsigned int, int);
extern char *func_003CD8(unsigned int, int);

void func_003A50(int clear_special, int include_seven)
{
    unsigned int index = 0;
    char *first;
    char *second;
    do {
        if (index == 7 && include_seven == 0) {
            index++;
            continue;
        }
        first = func_003C18(index, -1);
        if (first == 0) {
            index++;
        } else if (index == 12) {
            if (clear_special != 0) {
                *(int *)(first + 0x40) = 0;
                index++;
            } else {
                index = 13;
            }
        } else {
            second = func_003CD8(index, -1);
            if (second != 0)
                *(int *)(first + 0x40) = *(int *)(second + 0x38);
            index++;
        }
    } while (index <= 0x18);
}
