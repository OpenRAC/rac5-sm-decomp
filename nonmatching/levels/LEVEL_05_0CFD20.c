/* LEVEL_05.REL:0x0CFD20: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 92 bytes, first difference at +4.
 * Recheck the mode field and the conditional return expression. No matching credit.
 */
extern int D_003189EC;
extern char D_003189D8[];
extern char *func_0D77C8(char *);

int func_0CFD20(void)
{
    char *record = func_0D77C8(D_003189D8);
    int mode = D_003189EC;
    if (mode == 1) return *(int *)(record + 0x2c);
    if (mode == 0) return *(int *)(record + 0x28);
    if (mode == 2) return *(int *)(record + 0x30);
    return 0;
}
