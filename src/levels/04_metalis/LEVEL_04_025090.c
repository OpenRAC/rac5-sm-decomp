extern int D_0020D0FC;
extern int D_0020D100;

void func_025090(void)
{
    int count = D_0020D0FC - 1;

    D_0020D0FC = count;
    if (count == 0)
        D_0020D100 = 0;
}
