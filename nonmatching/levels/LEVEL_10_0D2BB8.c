/* LEVEL_10.REL:0x0D2BB8: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 92 bytes, first difference at +4.
 * Recheck the mode field and the conditional return expression. No matching credit.
 */
extern int D_00335F2C;
extern char D_00335F18[];
extern char *func_0DA660(char *);

int func_0D2BB8(void)
{
    char *record = func_0DA660(D_00335F18);
    int mode = D_00335F2C;
    if (mode == 1) return *(int *)(record + 0x2c);
    if (mode == 0) return *(int *)(record + 0x28);
    if (mode == 2) return *(int *)(record + 0x30);
    return 0;
}
