extern int func_079008(void);
extern char *D_001A570C;
char *func_078D38(void)
{
    char *result;
    if (func_079008() != 0)
        result = D_001A570C + 0x104;
    else
        result = D_001A570C + 0x148;
    return result;
}