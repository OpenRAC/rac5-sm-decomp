extern int func_085A08(void);
extern char *D_001E55DC;
char *func_0858A8(int a)
{
    char *result;
    if (func_085A08() != 0)
        result = D_001E55DC + 0x1d0;
    else
        result = D_001E55DC + 0x1e0;
    return result;
}