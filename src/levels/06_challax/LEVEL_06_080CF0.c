extern int func_080F28(int);
extern char *D_001E515C;
char *func_080CF0(int mask)
{
    char *result;
    if (func_080F28(mask) != 0)
        result = D_001E515C + 0x104;
    else
        result = D_001E515C + 0x148;
    return result;
}