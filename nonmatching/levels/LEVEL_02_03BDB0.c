/* LEVEL_02.REL:0x03BDB0: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 100 bytes, first difference at +28.
 * Recheck the segmented-copy loop and argument lifetime. No matching credit.
 */
extern void func_03BCB8(char *, char *);
extern void func_03BD60(char *, char *, int);

void func_03BDB0(char *first, char *last)
{
    if (((int)last - (int)first) >> 1 < 0x11) {
        func_03BCB8(first, last);
    } else {
        char *middle = first + 0x20;
        func_03BCB8(first, middle);
        func_03BD60(middle, last, 0);
    }
}
