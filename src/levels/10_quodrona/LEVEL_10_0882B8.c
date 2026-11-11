extern int func_088418(int mask);
extern char *D_001FF25C;
char *func_0882B8(int mask)
{
    char *result;
    if (func_088418(mask) != 0)
        result = D_001FF25C + 0x1d0;
    else
        result = D_001FF25C + 0x1e0;
    return result;
}