/* LEVEL_03.REL:0x0355A8: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 100 bytes, first difference at +28.
 * Recheck the segmented-copy loop and argument lifetime. No matching credit.
 */
extern void func_0354B0(char *, char *);
extern void func_035558(char *, char *, int);

void func_0355A8(char *first, char *last)
{
    if (((int)last - (int)first) >> 1 < 0x11) {
        func_0354B0(first, last);
    } else {
        char *middle = first + 0x20;
        func_0354B0(first, middle);
        func_035558(middle, last, 0);
    }
}
