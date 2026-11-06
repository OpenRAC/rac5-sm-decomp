/* LEVEL_17.REL:0x0C03B0: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 92 bytes, first difference at +4.
 * Recheck the mode field and the conditional return expression. No matching credit.
 */
extern int D_0026BEAC;
extern char D_0026BE98[];
extern char *func_0C7E58(char *);

int func_0C03B0(void)
{
    char *record = func_0C7E58(D_0026BE98);
    int mode = D_0026BEAC;
    if (mode == 1) return *(int *)(record + 0x2c);
    if (mode == 0) return *(int *)(record + 0x28);
    if (mode == 2) return *(int *)(record + 0x30);
    return 0;
}
