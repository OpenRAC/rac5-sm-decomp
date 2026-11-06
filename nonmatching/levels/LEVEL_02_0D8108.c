/* LEVEL_02.REL:0x0D8108: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 92 bytes, first difference at +4.
 * Recheck the mode field and the conditional return expression. No matching credit.
 */
extern int D_0034402C;
extern char D_00344018[];
extern char *func_0DFBB0(char *);

int func_0D8108(void)
{
    char *record = func_0DFBB0(D_00344018);
    int mode = D_0034402C;
    if (mode == 1) return *(int *)(record + 0x2c);
    if (mode == 0) return *(int *)(record + 0x28);
    if (mode == 2) return *(int *)(record + 0x30);
    return 0;
}
