/* LEVEL_01.REL:0x0D1778: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 92 bytes, first difference at +4.
 * Recheck the mode field and the conditional return expression. No matching credit.
 */
extern int D_0032CB2C;
extern char D_0032CB18[];
extern char *func_0D9220(char *);

int func_0D1778(void)
{
    char *record = func_0D9220(D_0032CB18);
    int mode = D_0032CB2C;
    if (mode == 1) return *(int *)(record + 0x2c);
    if (mode == 0) return *(int *)(record + 0x28);
    if (mode == 2) return *(int *)(record + 0x30);
    return 0;
}
