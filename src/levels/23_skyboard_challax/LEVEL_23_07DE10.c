extern int func_07DF70(int mask);
extern char *D_001C965C;
char *func_07DE10(int mask)
{
    char *result;
    if (func_07DF70(mask) != 0)
        result = D_001C965C + 0x1d0;
    else
        result = D_001C965C + 0x1e0;
    return result;
}
