extern int D_001532FC;
extern int D_00153300;

void func_0201F0(void)
{
    int count = D_001532FC - 1;

    D_001532FC = count;
    if (count == 0)
        D_00153300 = 0;
}
