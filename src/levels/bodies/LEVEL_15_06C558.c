extern int func_06C790(int);
extern char *D_0014AEDC;
char *func_06C558(int mask)
{
    char *result;
    if (func_06C790(mask) != 0)
        result = D_0014AEDC + 0x104;
    else
        result = D_0014AEDC + 0x148;
    return result;
}