/* FRONTEND:0x021188 -- returns whether a field at +0xDC of a pointed record is non-negative. */
extern char D_00032814[];
int func_021188(void)
{
    char *p = *(char **)D_00032814;
    int n;
    if (p == 0)
        return 0;
    n = ~*(int *)(p + 0xDC);
    if (n < 0)
        return 1;
    return 0;
}
