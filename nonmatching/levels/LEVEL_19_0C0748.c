/* LEVEL_19.REL:0x0C0748: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 92 bytes, first difference at +4.
 * Recheck the mode field and the conditional return expression. No matching credit.
 */
extern int D_0027AD2C;
extern char D_0027AD18[];
extern char *func_0C81F0(char *);

int func_0C0748(void)
{
    char *record = func_0C81F0(D_0027AD18);
    int mode = D_0027AD2C;
    if (mode == 1) return *(int *)(record + 0x2c);
    if (mode == 0) return *(int *)(record + 0x28);
    if (mode == 2) return *(int *)(record + 0x30);
    return 0;
}
