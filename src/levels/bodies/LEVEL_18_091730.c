extern int D_001A5CF0;
extern int D_0026A6D8[];

unsigned int func_091730(void)
{
    int i = D_001A5CF0;

    if (i >= 0x300)
        return 0xFFFFFFFF;
    D_001A5CF0 = i + 1;
    D_0026A6D8[i] = 0;
    return (unsigned int)i;
}
