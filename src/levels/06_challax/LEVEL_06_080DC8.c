extern int func_080F28(void);
extern char *D_001E515C;
char *func_080DC8(int a)
{
    char *result;
    if (func_080F28() != 0)
        result = D_001E515C + 0x1d0;
    else
        result = D_001E515C + 0x1e0;
    return result;
}