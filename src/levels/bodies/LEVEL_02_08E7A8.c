extern int func_08E9E0(int);
extern char *D_0020B21C;
char *func_08E7A8(int mask)
{
    char *result;
    if (func_08E9E0(mask) != 0)
        result = D_0020B21C + 0x104;
    else
        result = D_0020B21C + 0x148;
    return result;
}