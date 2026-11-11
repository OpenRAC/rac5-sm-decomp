extern int D_001C737C;
extern int D_001C7380;

void func_023458(void)
{
    int count = D_001C737C - 1;

    D_001C737C = count;
    if (count == 0)
        D_001C7380 = 0;
}
