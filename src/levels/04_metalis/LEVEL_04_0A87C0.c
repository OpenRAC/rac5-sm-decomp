extern int D_0020FD60;
extern int D_002CD008[];

unsigned int func_0A87C0(void)
{
    int i = D_0020FD60;

    if (i >= 0x300)
        return 0xFFFFFFFF;
    D_0020FD60 = i + 1;
    D_002CD008[i] = 0;
    return (unsigned int)i;
}
