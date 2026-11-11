extern int D_0014B520;
extern int D_001CA848[];

unsigned int func_083EA8(void)
{
    int i = D_0014B520;

    if (i >= 0x300)
        return 0xFFFFFFFF;
    D_0014B520 = i + 1;
    D_001CA848[i] = 0;
    return (unsigned int)i;
}
