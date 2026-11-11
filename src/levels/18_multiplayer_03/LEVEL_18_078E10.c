extern int func_079008(int mask);
extern char *D_001A570C;
char *func_078E10(int mask)
{
    char *result;
    if (func_079008(mask) != 0)
        result = D_001A570C + 0x1d0;
    else
        result = D_001A570C + 0x1e0;
    return result;
}