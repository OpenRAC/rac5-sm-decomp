extern int func_081350(void);
extern char *D_001C6EDC;
char *func_0811F0(void)
{
    char *result;
    if (func_081350() != 0)
        result = D_001C6EDC + 0x1d0;
    else
        result = D_001C6EDC + 0x1e0;
    return result;
}