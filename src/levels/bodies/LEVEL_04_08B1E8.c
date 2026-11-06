extern int func_08B348(void);
extern char *D_0020F71C;
char *func_08B1E8(void)
{
    char *result;
    if (func_08B348() != 0)
        result = D_0020F71C + 0x1d0;
    else
        result = D_0020F71C + 0x1e0;
    return result;
}