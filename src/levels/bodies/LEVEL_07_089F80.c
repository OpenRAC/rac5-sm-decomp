extern int func_08A180(int);
extern char *D_0020A55C;
char *func_089F80(int mask)
{
    char *result;
    if (func_08A180(mask) != 0)
        result = D_0020A55C + 0x104;
    else
        result = D_0020A55C + 0x148;
    return result;
}