extern int D_0020EF20;
extern int D_002CD688[];

unsigned int func_0A3330(void)
{
    int i = D_0020EF20;

    if (i >= 0x300)
        return 0xFFFFFFFF;
    D_0020EF20 = i + 1;
    D_002CD688[i] = 0;
    return (unsigned int)i;
}
