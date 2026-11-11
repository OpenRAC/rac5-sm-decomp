extern int D_00155C20;
extern int D_002083C8[];

unsigned int func_091BC0(void)
{
    int i = D_00155C20;

    if (i >= 0x300)
        return 0xFFFFFFFF;
    D_00155C20 = i + 1;
    D_002083C8[i] = 0;
    return (unsigned int)i;
}
