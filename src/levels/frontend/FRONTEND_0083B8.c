extern int D_0002B160;
extern int D_00122488[];

unsigned int func_0083B8(void)
{
    int i = D_0002B160;

    if (i >= 0x300)
        return 0xFFFFFFFF;
    D_0002B160 = i + 1;
    D_00122488[i] = 0;
    return (unsigned int)i;
}
