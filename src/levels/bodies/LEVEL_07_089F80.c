extern int func_08A180(void);
extern char *D_0020A55C;
char *func_089F80(void)
{
    char *result;
    if (func_08A180() != 0)
        result = D_0020A55C + 0x104;
    else
        result = D_0020A55C + 0x148;
    return result;
}