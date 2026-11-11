extern int D_001E32FC;
extern int D_001E3300;

void func_0243A8(void)
{
    int count = D_001E32FC - 1;

    D_001E32FC = count;
    if (count == 0)
        D_001E3300 = 0;
}
