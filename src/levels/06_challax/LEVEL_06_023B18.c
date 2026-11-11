extern int D_001E2E7C;
extern int D_001E2E80;

void func_023B18(void)
{
    int count = D_001E2E7C - 1;

    D_001E2E7C = count;
    if (count == 0)
        D_001E2E80 = 0;
}
