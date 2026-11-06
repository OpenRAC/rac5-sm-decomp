/* LEVEL_24.REL:0x030460: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 100 bytes, first difference at +28.
 * Recheck the segmented-copy loop and argument lifetime. No matching credit.
 */
extern void func_030368(char *, char *);
extern void func_030410(char *, char *, int);

void func_030460(char *first, char *last)
{
    if (((int)last - (int)first) >> 1 < 0x11) {
        func_030368(first, last);
    } else {
        char *middle = first + 0x20;
        func_030368(first, middle);
        func_030410(middle, last, 0);
    }
}
