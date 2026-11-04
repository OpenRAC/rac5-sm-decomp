extern int D_001A2F04;
extern int D_001A2F08;

void func_022640(void)
{
    int count = D_001A2F04 - 1;

    D_001A2F04 = count;
    if (count == 0)
        D_001A2F08 = 0;
}
