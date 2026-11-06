/* LEVEL_07.REL:0x037898: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 100 bytes, first difference at +28.
 * Recheck the segmented-copy loop and argument lifetime. No matching credit.
 */
extern void func_0377A0(char *, char *);
extern void func_037848(char *, char *, int);

void func_037898(char *first, char *last)
{
    if (((int)last - (int)first) >> 1 < 0x11) {
        func_0377A0(first, last);
    } else {
        char *middle = first + 0x20;
        func_0377A0(first, middle);
        func_037848(middle, last, 0);
    }
}
