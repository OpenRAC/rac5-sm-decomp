extern int D_001A59F0;
extern int D_0026A4D8[];

unsigned int func_091FB0(void)
{
    int i = D_001A59F0;

    if (i >= 0x300)
        return 0xFFFFFFFF;
    D_001A59F0 = i + 1;
    D_0026A4D8[i] = 0;
    return (unsigned int)i;
}
