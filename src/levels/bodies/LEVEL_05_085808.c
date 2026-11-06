extern int func_085A08(void);
extern char *D_001E55DC;
char *func_085808(void)
{
    char *result;
    if (func_085A08() != 0)
        result = D_001E55DC + 0x104;
    else
        result = D_001E55DC + 0x148;
    return result;
}