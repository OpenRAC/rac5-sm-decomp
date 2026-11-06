extern int func_084A68(void);
extern char *D_001E005C;
char *func_084868(void)
{
    char *result;
    if (func_084A68() != 0)
        result = D_001E005C + 0x104;
    else
        result = D_001E005C + 0x148;
    return result;
}