/* LEVEL_10.REL:0x129700: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 108 bytes, first difference at +20.
 * Recheck the record fields and call ordering against callers. No matching credit.
 */
extern int func_10E880(char *);
extern void func_10D848(int, int);

int func_129700(char *record)
{
    int value;
    if (record == 0) return 0;
    if (*(int *)(record + 0x78) == 0) {
        value = func_10E880(record + 0xc0);
        func_10D848(0x0d, *(int *)(record + 0x68));
        *(int *)(record + 0x7c) = value;
        *(int *)(record + 0x78) = 1;
        return value;
    }
    return *(int *)(record + 0x7c);
}
