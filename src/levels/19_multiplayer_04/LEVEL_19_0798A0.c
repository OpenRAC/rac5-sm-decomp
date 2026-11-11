extern int func_079B70(void);
extern char *D_001A540C;
char *func_0798A0(int unused)
{
    char *result;
    if (func_079B70() != 0)
        result = D_001A540C + 0x104;
    else
        result = D_001A540C + 0x148;
    return result;
}