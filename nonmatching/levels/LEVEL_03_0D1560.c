/* LEVEL_03.REL:0x0D1560: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 92 bytes, first difference at +4.
 * Recheck the mode field and the conditional return expression. No matching credit.
 */
extern int D_003479AC;
extern char D_00347998[];
extern char *func_0D9008(char *);

int func_0D1560(void)
{
    char *record = func_0D9008(D_00347998);
    int mode = D_003479AC;
    if (mode == 1) return *(int *)(record + 0x2c);
    if (mode == 0) return *(int *)(record + 0x28);
    if (mode == 2) return *(int *)(record + 0x30);
    return 0;
}
