/* LEVEL_20.REL:0x0AB3A0: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 92 bytes, first difference at +4.
 * Recheck the mode field and the conditional return expression. No matching credit.
 */
extern int D_0019E3EC;
extern char D_0019E3D8[];
extern char *func_0B2E48(char *);

int func_0AB3A0(void)
{
    char *record = func_0B2E48(D_0019E3D8);
    int mode = D_0019E3EC;
    if (mode == 1) return *(int *)(record + 0x2c);
    if (mode == 0) return *(int *)(record + 0x28);
    if (mode == 2) return *(int *)(record + 0x30);
    return 0;
}
