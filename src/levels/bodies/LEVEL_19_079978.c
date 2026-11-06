extern int func_079B70(void);
extern char *D_001A540C;
char *func_079978(void)
{
    char *result;
    if (func_079B70() != 0)
        result = D_001A540C + 0x1d0;
    else
        result = D_001A540C + 0x1e0;
    return result;
}