extern int func_0880B0(void);
extern char *D_001F625C;
char *func_087E78(void)
{
    char *result;
    if (func_0880B0() != 0)
        result = D_001F625C + 0x104;
    else
        result = D_001F625C + 0x148;
    return result;
}