/* LEVEL_04.REL:0x0389B0: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 100 bytes, first difference at +28.
 * Recheck the segmented-copy loop and argument lifetime. No matching credit.
 */
extern void func_0388B8(char *, char *);
extern void func_038960(char *, char *, int);

void func_0389B0(char *first, char *last)
{
    if (((int)last - (int)first) >> 1 < 0x11) {
        func_0388B8(first, last);
    } else {
        char *middle = first + 0x20;
        func_0388B8(first, middle);
        func_038960(middle, last, 0);
    }
}
