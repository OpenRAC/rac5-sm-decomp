/* LEVEL_06.REL:0x0CC078: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 92 bytes, first difference at +4.
 * Recheck the mode field and the conditional return expression. No matching credit.
 */
extern int D_003198AC;
extern char D_00319898[];
extern char *func_0D3B20(char *);

int func_0CC078(void)
{
    char *record = func_0D3B20(D_00319898);
    int mode = D_003198AC;
    if (mode == 1) return *(int *)(record + 0x2c);
    if (mode == 0) return *(int *)(record + 0x28);
    if (mode == 2) return *(int *)(record + 0x30);
    return 0;
}
