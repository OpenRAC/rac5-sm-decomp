/* LEVEL_06.REL:0x033DB8: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 100 bytes, first difference at +28.
 * Recheck the segmented-copy loop and argument lifetime. No matching credit.
 */
extern void func_033CC0(char *, char *);
extern void func_033D68(char *, char *, int);

void func_033DB8(char *first, char *last)
{
    if (((int)last - (int)first) >> 1 < 0x11) {
        func_033CC0(first, last);
    } else {
        char *middle = first + 0x20;
        func_033CC0(first, middle);
        func_033D68(middle, last, 0);
    }
}
