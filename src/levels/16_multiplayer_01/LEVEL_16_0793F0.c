extern int func_079688(int);
extern char *D_001A428C;
char *func_0793F0(int mask)
{
    char *result;
    if (func_079688(mask) != 0)
        result = D_001A428C + 0x104;
    else
        result = D_001A428C + 0x148;
    return result;
}