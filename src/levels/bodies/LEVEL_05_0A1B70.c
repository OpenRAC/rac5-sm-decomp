extern int D_001E5C20;
extern int D_0029E6C8[];

unsigned int func_0A1B70(void)
{
    int i = D_001E5C20;

    if (i >= 0x300)
        return 0xFFFFFFFF;
    D_001E5C20 = i + 1;
    D_0029E6C8[i] = 0;
    return (unsigned int)i;
}
