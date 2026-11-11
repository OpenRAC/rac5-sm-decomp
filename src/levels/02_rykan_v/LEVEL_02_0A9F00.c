extern int D_0020B860;
extern int D_002C9D08[];

int func_0A9F00(int index, int value)
{
    if (index >= D_0020B860)
        return 0;
    D_002C9D08[index] = value;
    return 1;
}