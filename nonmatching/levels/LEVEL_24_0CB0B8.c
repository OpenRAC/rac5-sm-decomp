/* LEVEL_24.REL:0x0CB0B8: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 92 bytes, first difference at +4.
 * Recheck the mode field and the conditional return expression. No matching credit.
 */
extern int D_002F89EC;
extern char D_002F89D8[];
extern char *func_0D2B88(char *);

int func_0CB0B8(void)
{
    char *record = func_0D2B88(D_002F89D8);
    int mode = D_002F89EC;
    if (mode == 1) return *(int *)(record + 0x2c);
    if (mode == 0) return *(int *)(record + 0x28);
    if (mode == 2) return *(int *)(record + 0x30);
    return 0;
}
