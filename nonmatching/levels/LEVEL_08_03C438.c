/* LEVEL_08.REL:0x03C438: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 100 bytes, first difference at +28.
 * Recheck the segmented-copy loop and argument lifetime. No matching credit.
 */
extern void func_03C340(char *, char *);
extern void func_03C3E8(char *, char *, int);

void func_03C438(char *first, char *last)
{
    if (((int)last - (int)first) >> 1 < 0x11) {
        func_03C340(first, last);
    } else {
        char *middle = first + 0x20;
        func_03C340(first, middle);
        func_03C3E8(middle, last, 0);
    }
}
