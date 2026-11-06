extern int func_081350(void);
extern char *D_001C6EDC;
char *func_081118(void)
{
    char *result;
    if (func_081350() != 0)
        result = D_001C6EDC + 0x104;
    else
        result = D_001C6EDC + 0x148;
    return result;
}