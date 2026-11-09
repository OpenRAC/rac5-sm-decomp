/* LEVEL_08:0x144D20 -- placement copy of FRONTEND_021188.c: returns whether a field at +0xDC of a pointed record is non-negative. */
extern char D_0024FF0C[];
int func_144D20(void)
{
    char *p = *(char **)D_0024FF0C;
    int n;
    if (p == 0)
        return 0;
    n = ~*(int *)(p + 0xDC);
    if (n < 0)
        return 1;
    return 0;
}
