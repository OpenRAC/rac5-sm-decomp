extern int D_00208BFC;
extern int D_00208C00;

void func_025D70(void)
{
    int count = D_00208BFC - 1;

    D_00208BFC = count;
    if (count == 0)
        D_00208C00 = 0;
}
