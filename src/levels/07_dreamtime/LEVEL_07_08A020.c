extern int func_08A180(int mask);
extern char *D_0020A55C;
char *func_08A020(int mask)
{
    char *result;
    if (func_08A180(mask) != 0)
        result = D_0020A55C + 0x1d0;
    else
        result = D_0020A55C + 0x1e0;
    return result;
}