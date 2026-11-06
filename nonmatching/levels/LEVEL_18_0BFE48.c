/* LEVEL_18.REL:0x0BFE48: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 92 bytes, first difference at +4.
 * Recheck the mode field and the conditional return expression. No matching credit.
 */
extern int D_0027AF2C;
extern char D_0027AF18[];
extern char *func_0C78F0(char *);

int func_0BFE48(void)
{
    char *record = func_0C78F0(D_0027AF18);
    int mode = D_0027AF2C;
    if (mode == 1) return *(int *)(record + 0x2c);
    if (mode == 0) return *(int *)(record + 0x28);
    if (mode == 2) return *(int *)(record + 0x30);
    return 0;
}
