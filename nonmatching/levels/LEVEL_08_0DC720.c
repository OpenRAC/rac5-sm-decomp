/* LEVEL_08.REL:0x0DC720: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 92 bytes, first difference at +4.
 * Recheck the mode field and the conditional return expression. No matching credit.
 */
extern int D_0037BDAC;
extern char D_0037BD98[];
extern char *func_0E41F0(char *);

int func_0DC720(void)
{
    char *record = func_0E41F0(D_0037BD98);
    int mode = D_0037BDAC;
    if (mode == 1) return *(int *)(record + 0x2c);
    if (mode == 0) return *(int *)(record + 0x28);
    if (mode == 2) return *(int *)(record + 0x30);
    return 0;
}
