extern int func_079008(void);
extern char *D_001A570C;
char *func_078E10(void)
{
    char *result;
    if (func_079008() != 0)
        result = D_001A570C + 0x1d0;
    else
        result = D_001A570C + 0x1e0;
    return result;
}