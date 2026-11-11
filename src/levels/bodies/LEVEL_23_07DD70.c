extern int func_07DF70(int);
extern char *D_001C965C;
char *func_07DD70(int mask)
{
    char *result;
    if (func_07DF70(mask) != 0)
        result = D_001C965C + 0x104;
    else
        result = D_001C965C + 0x148;
    return result;
}