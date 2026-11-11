extern int D_00220488;
extern int *D_00220484;
int func_13FF98(int value)
{
    if (D_00220488 == 0)
        return 0;
    if (value != D_00220488)
        return 0;
    *D_00220484 = 0;
    return 1;
}