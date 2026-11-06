/* LEVEL_17.REL:0x032E28: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 100 bytes, first difference at +28.
 * Recheck the segmented-copy loop and argument lifetime. No matching credit.
 */
extern void func_032D30(char *, char *);
extern void func_032DD8(char *, char *, int);

void func_032E28(char *first, char *last)
{
    if (((int)last - (int)first) >> 1 < 0x11) {
        func_032D30(first, last);
    } else {
        char *middle = first + 0x20;
        func_032D30(first, middle);
        func_032DD8(middle, last, 0);
    }
}
