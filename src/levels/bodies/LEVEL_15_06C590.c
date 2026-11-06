extern int func_06C790(void);
extern char *D_0014AEDC;
char *func_06C590(void)
{
    char *result;
    if (func_06C790() != 0)
        result = D_0014AEDC + 0x104;
    else
        result = D_0014AEDC + 0x148;
    return result;
}