extern int func_079688(int mask);
extern char *D_001A428C;
char *func_079490(int mask)
{
    char *result;
    if (func_079688(mask) != 0)
        result = D_001A428C + 0x1d0;
    else
        result = D_001A428C + 0x1e0;
    return result;
}