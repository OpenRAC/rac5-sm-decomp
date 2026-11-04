extern int D_001E06A0;
extern int D_00299F88[];

unsigned int func_0A0860(void)
{
    int i = D_001E06A0;

    if (i >= 0x300)
        return 0xFFFFFFFF;
    D_001E06A0 = i + 1;
    D_00299F88[i] = 0;
    return (unsigned int)i;
}
