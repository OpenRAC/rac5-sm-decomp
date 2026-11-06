/* LEVEL_05.REL:0x035078: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 100 bytes, first difference at +28.
 * Recheck the segmented-copy loop and argument lifetime. No matching credit.
 */
extern void func_034F80(char *, char *);
extern void func_035028(char *, char *, int);

void func_035078(char *first, char *last)
{
    if (((int)last - (int)first) >> 1 < 0x11) {
        func_034F80(first, last);
    } else {
        char *middle = first + 0x20;
        func_034F80(first, middle);
        func_035028(middle, last, 0);
    }
}
