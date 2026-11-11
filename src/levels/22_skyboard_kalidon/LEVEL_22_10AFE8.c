extern int D_00166048;
extern int *D_00166044;
int func_10AFE8(int value)
{
    if (D_00166048 == 0)
        return 0;
    if (value != D_00166048)
        return 0;
    *D_00166044 = 0;
    return 1;
}