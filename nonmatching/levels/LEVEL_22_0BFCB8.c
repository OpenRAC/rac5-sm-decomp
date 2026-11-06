/* LEVEL_22.REL:0x0BFCB8: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 92 bytes, first difference at +4.
 * Recheck the mode field and the conditional return expression. No matching credit.
 */
extern int D_002826EC;
extern char D_002826D8[];
extern char *func_0C7760(char *);

int func_0BFCB8(void)
{
    char *record = func_0C7760(D_002826D8);
    int mode = D_002826EC;
    if (mode == 1) return *(int *)(record + 0x2c);
    if (mode == 0) return *(int *)(record + 0x28);
    if (mode == 2) return *(int *)(record + 0x30);
    return 0;
}
