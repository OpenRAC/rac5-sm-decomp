extern int func_079688(void);
extern char *D_001A428C;
char *func_0793F0(void)
{
    char *result;
    if (func_079688() != 0)
        result = D_001A428C + 0x104;
    else
        result = D_001A428C + 0x148;
    return result;
}