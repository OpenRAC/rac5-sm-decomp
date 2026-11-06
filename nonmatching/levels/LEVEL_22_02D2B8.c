/* LEVEL_22.REL:0x02D2B8: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 100 bytes, first difference at +28.
 * Recheck the segmented-copy loop and argument lifetime. No matching credit.
 */
extern void func_02D1C0(char *, char *);
extern void func_02D268(char *, char *, int);

void func_02D2B8(char *first, char *last)
{
    if (((int)last - (int)first) >> 1 < 0x11) {
        func_02D1C0(first, last);
    } else {
        char *middle = first + 0x20;
        func_02D1C0(first, middle);
        func_02D268(middle, last, 0);
    }
}
