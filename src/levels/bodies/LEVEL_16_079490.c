extern int func_079688(void);
extern char *D_001A428C;
char *func_079490(void)
{
    char *result;
    if (func_079688() != 0)
        result = D_001A428C + 0x1d0;
    else
        result = D_001A428C + 0x1e0;
    return result;
}