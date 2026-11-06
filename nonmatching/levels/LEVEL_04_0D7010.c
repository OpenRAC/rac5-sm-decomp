/* LEVEL_04.REL:0x0D7010: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 92 bytes, first difference at +4.
 * Recheck the mode field and the conditional return expression. No matching credit.
 */
extern int D_0034732C;
extern char D_00347318[];
extern char *func_0DEAE0(char *);

int func_0D7010(void)
{
    char *record = func_0DEAE0(D_00347318);
    int mode = D_0034732C;
    if (mode == 1) return *(int *)(record + 0x2c);
    if (mode == 0) return *(int *)(record + 0x28);
    if (mode == 2) return *(int *)(record + 0x30);
    return 0;
}
