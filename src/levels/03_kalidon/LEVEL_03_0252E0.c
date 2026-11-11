extern int D_0020C5FC;
extern int D_0020C600;

void func_0252E0(void)
{
    int count = D_0020C5FC - 1;

    D_0020C5FC = count;
    if (count == 0)
        D_0020C600 = 0;
}
