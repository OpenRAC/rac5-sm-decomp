extern int func_0794C8(void);
extern char *D_001555DC;
char *func_079290(void)
{
    char *result;
    if (func_0794C8() != 0)
        result = D_001555DC + 0x104;
    else
        result = D_001555DC + 0x148;
    return result;
}