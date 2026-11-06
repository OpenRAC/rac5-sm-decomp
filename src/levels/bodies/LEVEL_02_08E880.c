extern int func_08E9E0(void);
extern char *D_0020B21C;
char *func_08E880(void)
{
    char *result;
    if (func_08E9E0() != 0)
        result = D_0020B21C + 0x1d0;
    else
        result = D_0020B21C + 0x1e0;
    return result;
}