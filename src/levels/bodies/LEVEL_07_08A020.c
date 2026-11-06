extern int func_08A180(void);
extern char *D_0020A55C;
char *func_08A020(void)
{
    char *result;
    if (func_08A180() != 0)
        result = D_0020A55C + 0x1d0;
    else
        result = D_0020A55C + 0x1e0;
    return result;
}