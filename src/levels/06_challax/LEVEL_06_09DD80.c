extern int D_001E57A0;
extern int D_0029F588[];

unsigned int func_09DD80(void)
{
    int i = D_001E57A0;

    if (i >= 0x300)
        return 0xFFFFFFFF;
    D_001E57A0 = i + 1;
    D_0029F588[i] = 0;
    return (unsigned int)i;
}
