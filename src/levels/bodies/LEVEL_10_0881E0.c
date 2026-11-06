extern int func_088418(void);
extern char *D_001FF25C;
char *func_0881E0(void)
{
    char *result;
    if (func_088418() != 0)
        result = D_001FF25C + 0x104;
    else
        result = D_001FF25C + 0x148;
    return result;
}