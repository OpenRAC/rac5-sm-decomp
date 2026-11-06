extern int func_087F08(void);
extern char *D_0020E8DC;
char *func_087D08(void)
{
    char *result;
    if (func_087F08() != 0)
        result = D_0020E8DC + 0x104;
    else
        result = D_0020E8DC + 0x148;
    return result;
}