extern int D_00106F50;
extern int D_0018DB98[];

unsigned int func_07CE18(void)
{
    int i = D_00106F50;

    if (i >= 0x300)
        return 0xFFFFFFFF;
    D_00106F50 = i + 1;
    D_0018DB98[i] = 0;
    return (unsigned int)i;
}
