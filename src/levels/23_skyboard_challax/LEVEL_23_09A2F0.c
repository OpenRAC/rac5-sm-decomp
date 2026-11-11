extern int D_001C9CA0;
extern int D_00283C48[];

unsigned int func_09A2F0(void)
{
    int i = D_001C9CA0;

    if (i >= 0x300)
        return 0xFFFFFFFF;
    D_001C9CA0 = i + 1;
    D_00283C48[i] = 0;
    return (unsigned int)i;
}
