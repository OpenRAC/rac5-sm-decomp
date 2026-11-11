extern int D_00148BFC;
extern int D_00148C00;

void func_01F720(void)
{
    int count = D_00148BFC - 1;

    D_00148BFC = count;
    if (count == 0)
        D_00148C00 = 0;
}
