/* LEVEL_16.REL:0x0334E0: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 100 bytes, first difference at +28.
 * Recheck the segmented-copy loop and argument lifetime. No matching credit.
 */
extern void func_0333E8(char *, char *);
extern void func_033490(char *, char *, int);

void func_0334E0(char *first, char *last)
{
    if (((int)last - (int)first) >> 1 < 0x11) {
        func_0333E8(first, last);
    } else {
        char *middle = first + 0x20;
        func_0333E8(first, middle);
        func_033490(middle, last, 0);
    }
}
