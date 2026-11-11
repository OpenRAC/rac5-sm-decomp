/* LEVEL_18:0x10F208 -- placement copy of FRONTEND_021188.c: returns whether a field at +0xDC of a pointed record is non-negative. */
extern char D_001B5FDC[];
int func_10F208(void)
{
    char *p = *(char **)D_001B5FDC;
    int n;
    if (p == 0)
        return 0;
    n = ~*(int *)(p + 0xDC);
    if (n < 0)
        return 1;
    return 0;
}
