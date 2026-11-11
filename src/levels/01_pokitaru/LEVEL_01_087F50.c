extern int func_0880B0(void);
extern char *D_001F625C;
char *func_087F50(int a)
{
    char *result;
    if (func_0880B0() != 0)
        result = D_001F625C + 0x1d0;
    else
        result = D_001F625C + 0x1e0;
    return result;
}