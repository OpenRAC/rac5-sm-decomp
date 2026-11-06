extern int func_06C790(void);
extern char *D_0014AEDC;
char *func_06C630(void)
{
    char *result;
    if (func_06C790() != 0)
        result = D_0014AEDC + 0x1d0;
    else
        result = D_0014AEDC + 0x1e0;
    return result;
}