extern int func_080F28(void);
extern char *D_001E515C;
char *func_080D28(void)
{
    char *result;
    if (func_080F28() != 0)
        result = D_001E515C + 0x104;
    else
        result = D_001E515C + 0x148;
    return result;
}