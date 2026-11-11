extern int func_088418(int);
extern char *D_001FF25C;
char *func_088218(int mask)
{
    char *result;
    if (func_088418(mask) != 0)
        result = D_001FF25C + 0x104;
    else
        result = D_001FF25C + 0x148;
    return result;
}