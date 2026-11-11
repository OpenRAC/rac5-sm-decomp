extern int D_001C7520;
extern int D_0027E6C8[];

unsigned int func_09CE28(void)
{
    int i = D_001C7520;

    if (i >= 0x300)
        return 0xFFFFFFFF;
    D_001C7520 = i + 1;
    D_0027E6C8[i] = 0;
    return (unsigned int)i;
}
