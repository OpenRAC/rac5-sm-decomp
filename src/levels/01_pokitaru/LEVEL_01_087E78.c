extern int func_0880B0(int);
extern char *D_001F625C;
char *func_087E78(int mask)
{
    char *result;
    if (func_0880B0(mask) != 0)
        result = D_001F625C + 0x104;
    else
        result = D_001F625C + 0x148;
    return result;
}