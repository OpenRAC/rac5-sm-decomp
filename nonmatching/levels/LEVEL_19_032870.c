/* LEVEL_19.REL:0x032870: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 100 bytes, first difference at +28.
 * Recheck the segmented-copy loop and argument lifetime. No matching credit.
 */
extern void func_032778(char *, char *);
extern void func_032820(char *, char *, int);

void func_032870(char *first, char *last)
{
    if (((int)last - (int)first) >> 1 < 0x11) {
        func_032778(first, last);
    } else {
        char *middle = first + 0x20;
        func_032778(first, middle);
        func_032820(middle, last, 0);
    }
}
