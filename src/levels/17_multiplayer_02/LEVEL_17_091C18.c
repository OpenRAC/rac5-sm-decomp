extern int D_00197E70;
extern int D_0025B658[];

unsigned int func_091C18(void)
{
    int i = D_00197E70;

    if (i >= 0x300)
        return 0xFFFFFFFF;
    D_00197E70 = i + 1;
    D_0025B658[i] = 0;
    return (unsigned int)i;
}
