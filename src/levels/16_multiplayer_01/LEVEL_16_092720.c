extern int D_001A4870;
extern int D_0026A358[];

unsigned int func_092720(void)
{
    int i = D_001A4870;

    if (i >= 0x300)
        return 0xFFFFFFFF;
    D_001A4870 = i + 1;
    D_0026A358[i] = 0;
    return (unsigned int)i;
}
