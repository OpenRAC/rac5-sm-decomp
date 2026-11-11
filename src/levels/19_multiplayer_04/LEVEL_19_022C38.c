extern int D_001A2C04;
extern int D_001A2C08;

void func_022C38(void)
{
    int count = D_001A2C04 - 1;

    D_001A2C04 = count;
    if (count == 0)
        D_001A2C08 = 0;
}
