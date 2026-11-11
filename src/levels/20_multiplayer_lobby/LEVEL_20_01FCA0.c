extern int D_00104164;
extern int D_00104168;

void func_01FCA0(void)
{
    int count = D_00104164 - 1;

    D_00104164 = count;
    if (count == 0)
        D_00104168 = 0;
}
