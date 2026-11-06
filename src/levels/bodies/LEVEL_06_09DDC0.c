extern int D_001E57A0;
extern int D_0029F588[];

int func_09DDC0(int index, int value)
{
    if (index >= D_001E57A0)
        return 0;
    D_0029F588[index] = value;
    return 1;
}