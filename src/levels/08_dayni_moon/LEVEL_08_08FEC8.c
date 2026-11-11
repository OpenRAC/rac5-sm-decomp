extern int func_0901A8(int);
extern char *D_0023F11C;
char *func_08FEC8(int mask)
{
    char *result;
    if (func_0901A8(mask) != 0)
        result = D_0023F11C + 0x104;
    else
        result = D_0023F11C + 0x148;
    return result;
}