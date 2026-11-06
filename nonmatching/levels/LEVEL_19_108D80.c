/* LEVEL_19.REL:0x108D80: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 108 bytes, first difference at +20.
 * Recheck the record fields and call ordering against callers. No matching credit.
 */
extern int func_0F18C8(char *);
extern void func_0F0890(int, int);

int func_108D80(char *record)
{
    int value;
    if (record == 0) return 0;
    if (*(int *)(record + 0x78) == 0) {
        value = func_0F18C8(record + 0xc0);
        func_0F0890(0x0d, *(int *)(record + 0x68));
        *(int *)(record + 0x7c) = value;
        *(int *)(record + 0x78) = 1;
        return value;
    }
    return *(int *)(record + 0x7c);
}
