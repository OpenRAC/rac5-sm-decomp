extern int func_08B348(int);
extern char *D_0020F71C;
char *func_08B110(int mask)
{
    char *result;
    if (func_08B348(mask) != 0)
        result = D_0020F71C + 0x104;
    else
        result = D_0020F71C + 0x148;
    return result;
}