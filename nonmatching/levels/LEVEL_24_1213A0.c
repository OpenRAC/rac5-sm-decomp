/* LEVEL_24.REL:0x1213A0: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 108 bytes, first difference at +20.
 * Recheck the record fields and call ordering against callers. No matching credit.
 */
extern int func_107668(char *);
extern void func_106670(int, int);

int func_1213A0(char *record)
{
    int value;
    if (record == 0) return 0;
    if (*(int *)(record + 0x78) == 0) {
        value = func_107668(record + 0xc0);
        func_106670(0x0d, *(int *)(record + 0x68));
        *(int *)(record + 0x7c) = value;
        *(int *)(record + 0x78) = 1;
        return value;
    }
    return *(int *)(record + 0x7c);
}
