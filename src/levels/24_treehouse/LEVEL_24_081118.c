extern int func_081350(int);
extern char *D_001C6EDC;
char *func_081118(int mask)
{
    char *result;
    if (func_081350(mask) != 0)
        result = D_001C6EDC + 0x104;
    else
        result = D_001C6EDC + 0x148;
    return result;
}