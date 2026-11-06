/* LEVEL_01.REL:0x04DB68: Ghidra body 76 bytes.
 * Pinned pure C links 76 bytes and first differs at +18.
 * Recheck the object field reload and call argument scheduling. No matching credit.
 */
extern void func_078E78(void);
extern void func_07C670(int, int);

void func_04DB68(char *record)
{
    int value;
    if (*(int *)(record + 0x59c) != 0) {
        func_078E78();
    }
    value = *(int *)(record + 0xda4);
    if (value != 0) {
        func_07C670(value, 1);
        *(int *)(record + 0xda4) = 0;
    }
}
