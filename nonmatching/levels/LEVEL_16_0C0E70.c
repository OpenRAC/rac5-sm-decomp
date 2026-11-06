/* LEVEL_16.REL:0x0C0E70: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 92 bytes, first difference at +4.
 * Recheck the mode field and the conditional return expression. No matching credit.
 */
extern int D_0027ABAC;
extern char D_0027AB98[];
extern char *func_0C8918(char *);

int func_0C0E70(void)
{
    char *record = func_0C8918(D_0027AB98);
    int mode = D_0027ABAC;
    if (mode == 1) return *(int *)(record + 0x2c);
    if (mode == 0) return *(int *)(record + 0x28);
    if (mode == 2) return *(int *)(record + 0x30);
    return 0;
}
