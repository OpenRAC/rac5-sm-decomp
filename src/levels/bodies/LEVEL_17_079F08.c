extern int func_07A100(void);
extern char *D_0019788C;
char *func_079F08(void)
{
    char *result;
    if (func_07A100() != 0)
        result = D_0019788C + 0x1d0;
    else
        result = D_0019788C + 0x1e0;
    return result;
}