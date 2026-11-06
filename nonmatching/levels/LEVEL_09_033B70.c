/* LEVEL_09.REL:0x033B70: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 100 bytes, first difference at +28.
 * Recheck the segmented-copy loop and argument lifetime. No matching credit.
 */
extern void func_033A78(char *, char *);
extern void func_033B20(char *, char *, int);

void func_033B70(char *first, char *last)
{
    if (((int)last - (int)first) >> 1 < 0x11) {
        func_033A78(first, last);
    } else {
        char *middle = first + 0x20;
        func_033A78(first, middle);
        func_033B20(middle, last, 0);
    }
}
