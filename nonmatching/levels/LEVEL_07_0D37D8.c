/* LEVEL_07.REL:0x0D37D8: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 92 bytes, first difference at +4.
 * Recheck the mode field and the conditional return expression. No matching credit.
 */
extern int D_0034242C;
extern char D_00342418[];
extern char *func_0DB280(char *);

int func_0D37D8(void)
{
    char *record = func_0DB280(D_00342418);
    int mode = D_0034242C;
    if (mode == 1) return *(int *)(record + 0x2c);
    if (mode == 0) return *(int *)(record + 0x28);
    if (mode == 2) return *(int *)(record + 0x30);
    return 0;
}
