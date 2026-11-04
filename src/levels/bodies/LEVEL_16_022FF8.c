extern int D_001A1A84;
extern int D_001A1A88;

void func_022FF8(void)
{
    int count = D_001A1A84 - 1;

    D_001A1A84 = count;
    if (count == 0)
        D_001A1A88 = 0;
}
