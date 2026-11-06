/* LEVEL_23.REL:0x0C85A8: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 92 bytes, first difference at +4.
 * Recheck the mode field and the conditional return expression. No matching credit.
 */
extern int D_002FDF6C;
extern char D_002FDF58[];
extern char *func_0D0050(char *);

int func_0C85A8(void)
{
    char *record = func_0D0050(D_002FDF58);
    int mode = D_002FDF6C;
    if (mode == 1) return *(int *)(record + 0x2c);
    if (mode == 0) return *(int *)(record + 0x28);
    if (mode == 2) return *(int *)(record + 0x30);
    return 0;
}
