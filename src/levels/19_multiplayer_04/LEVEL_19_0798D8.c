extern int func_079B70(int);
extern char *D_001A540C;
char *func_0798D8(int mask)
{
    char *result;
    if (func_079B70(mask) != 0)
        result = D_001A540C + 0x104;
    else
        result = D_001A540C + 0x148;
    return result;
}