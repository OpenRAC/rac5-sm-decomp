extern int D_0023F760;
extern int D_00301A88[];

unsigned int func_0ADEA8(void)
{
    int i = D_0023F760;

    if (i >= 0x300)
        return 0xFFFFFFFF;
    D_0023F760 = i + 1;
    D_00301A88[i] = 0;
    return (unsigned int)i;
}
