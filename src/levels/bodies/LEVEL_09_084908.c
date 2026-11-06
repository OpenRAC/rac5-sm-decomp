extern int func_084A68(void);
extern char *D_001E005C;
char *func_084908(void)
{
    char *result;
    if (func_084A68() != 0)
        result = D_001E005C + 0x1d0;
    else
        result = D_001E005C + 0x1e0;
    return result;
}