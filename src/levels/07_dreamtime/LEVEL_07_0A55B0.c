extern int D_0020ABA0;
extern int D_002C8108[];

unsigned int func_0A55B0(void)
{
    int i = D_0020ABA0;

    if (i >= 0x300)
        return 0xFFFFFFFF;
    D_0020ABA0 = i + 1;
    D_002C8108[i] = 0;
    return (unsigned int)i;
}
