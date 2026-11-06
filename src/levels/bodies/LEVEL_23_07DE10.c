extern int func_07DF70(void);
extern char *D_001C965C;
char *func_07DE10(void)
{
    char *result;
    if (func_07DF70() != 0)
        result = D_001C965C + 0x1d0;
    else
        result = D_001C965C + 0x1e0;
    return result;
}