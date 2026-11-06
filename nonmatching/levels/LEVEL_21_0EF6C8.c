/* LEVEL_21.REL:0x0EF6C8: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 108 bytes, first difference at +20.
 * Recheck the record fields and call ordering against callers. No matching credit.
 */
extern int func_0D5EA8(char *);
extern void func_0D4EB0(int, int);

int func_0EF6C8(char *record)
{
    int value;
    if (record == 0) return 0;
    if (*(int *)(record + 0x78) == 0) {
        value = func_0D5EA8(record + 0xc0);
        func_0D4EB0(0x0d, *(int *)(record + 0x68));
        *(int *)(record + 0x7c) = value;
        *(int *)(record + 0x78) = 1;
        return value;
    }
    return *(int *)(record + 0x7c);
}
