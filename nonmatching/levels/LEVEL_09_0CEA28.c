/* LEVEL_09.REL:0x0CEA28: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 92 bytes, first difference at +4.
 * Recheck the mode field and the conditional return expression. No matching credit.
 */
extern int D_003142AC;
extern char D_00314298[];
extern char *func_0D64D0(char *);

int func_0CEA28(void)
{
    char *record = func_0D64D0(D_00314298);
    int mode = D_003142AC;
    if (mode == 1) return *(int *)(record + 0x2c);
    if (mode == 0) return *(int *)(record + 0x28);
    if (mode == 2) return *(int *)(record + 0x30);
    return 0;
}
