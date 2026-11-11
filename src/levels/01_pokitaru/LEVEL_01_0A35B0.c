extern int D_001F68A0;
extern int D_002B2808[];

unsigned int func_0A35B0(void)
{
    int i = D_001F68A0;

    if (i >= 0x300)
        return 0xFFFFFFFF;
    D_001F68A0 = i + 1;
    D_002B2808[i] = 0;
    return (unsigned int)i;
}
