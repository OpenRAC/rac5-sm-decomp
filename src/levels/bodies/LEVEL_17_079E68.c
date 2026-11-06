extern int func_07A100(void);
extern char *D_0019788C;
char *func_079E68(void)
{
    char *result;
    if (func_07A100() != 0)
        result = D_0019788C + 0x104;
    else
        result = D_0019788C + 0x148;
    return result;
}