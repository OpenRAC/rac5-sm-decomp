extern int D_0020B860;
extern int D_002C9D08[];

unsigned int func_0A9EC0(void)
{
    int i = D_0020B860;

    if (i >= 0x300)
        return 0xFFFFFFFF;
    D_0020B860 = i + 1;
    D_002C9D08[i] = 0;
    return (unsigned int)i;
}
