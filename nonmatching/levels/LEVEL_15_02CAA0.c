/* LEVEL_15.REL:0x02CAA0: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 100 bytes, first difference at +28.
 * Recheck the segmented-copy loop and argument lifetime. No matching credit.
 */
extern void func_02C9A8(char *, char *);
extern void func_02CA50(char *, char *, int);

void func_02CAA0(char *first, char *last)
{
    if (((int)last - (int)first) >> 1 < 0x11) {
        func_02C9A8(first, last);
    } else {
        char *middle = first + 0x20;
        func_02C9A8(first, middle);
        func_02CA50(middle, last, 0);
    }
}
