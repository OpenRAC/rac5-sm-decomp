extern int func_0794C8(int);
extern char *D_001555DC;
char *func_0792C8(int mask)
{
    char *result;
    if (func_0794C8(mask) != 0)
        result = D_001555DC + 0x104;
    else
        result = D_001555DC + 0x148;
    return result;
}