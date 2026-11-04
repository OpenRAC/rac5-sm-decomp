extern int D_001FF8A0;
extern int D_002BBC08[];

unsigned int func_0A46C8(void)
{
    int i = D_001FF8A0;

    if (i >= 0x300)
        return 0xFFFFFFFF;
    D_001FF8A0 = i + 1;
    D_002BBC08[i] = 0;
    return (unsigned int)i;
}
