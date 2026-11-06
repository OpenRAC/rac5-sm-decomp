extern int func_0901A8(void);
extern char *D_0023F11C;
char *func_08FF00(void)
{
    char *result;
    if (func_0901A8() != 0)
        result = D_0023F11C + 0x104;
    else
        result = D_0023F11C + 0x148;
    return result;
}