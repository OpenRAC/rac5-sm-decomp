/* LEVEL_01.REL:0x037368: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 100 bytes, first difference at +28.
 * Recheck the segmented-copy loop and argument lifetime. No matching credit.
 */
extern void func_037270(char *, char *);
extern void func_037318(char *, char *, int);

void func_037368(char *first, char *last)
{
    if (((int)last - (int)first) >> 1 < 0x11) {
        func_037270(first, last);
    } else {
        char *middle = first + 0x20;
        func_037270(first, middle);
        func_037318(middle, last, 0);
    }
}
