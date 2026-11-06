/* LEVEL_23.REL:0x030898: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 100 bytes, first difference at +28.
 * Recheck the segmented-copy loop and argument lifetime. No matching credit.
 */
extern void func_0307A0(char *, char *);
extern void func_030848(char *, char *, int);

void func_030898(char *first, char *last)
{
    if (((int)last - (int)first) >> 1 < 0x11) {
        func_0307A0(first, last);
    } else {
        char *middle = first + 0x20;
        func_0307A0(first, middle);
        func_030848(middle, last, 0);
    }
}
