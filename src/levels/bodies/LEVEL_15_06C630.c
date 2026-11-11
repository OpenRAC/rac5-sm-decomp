extern int func_06C790(int mask);
extern char *D_0014AEDC;
char *func_06C630(int mask)
{
    char *result;
    if (func_06C790(mask) != 0)
        result = D_0014AEDC + 0x1d0;
    else
        result = D_0014AEDC + 0x1e0;
    return result;
}