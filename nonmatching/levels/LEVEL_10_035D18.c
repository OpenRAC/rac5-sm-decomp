/* LEVEL_10.REL:0x035D18: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 100 bytes, first difference at +28.
 * Recheck the segmented-copy loop and argument lifetime. No matching credit.
 */
extern void func_035C20(char *, char *);
extern void func_035CC8(char *, char *, int);

void func_035D18(char *first, char *last)
{
    if (((int)last - (int)first) >> 1 < 0x11) {
        func_035C20(first, last);
    } else {
        char *middle = first + 0x20;
        func_035C20(first, middle);
        func_035CC8(middle, last, 0);
    }
}
