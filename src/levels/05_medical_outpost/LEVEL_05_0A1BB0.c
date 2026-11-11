extern int D_001E5C20;
extern int D_0029E6C8[];

int func_0A1BB0(int index, int value)
{
    if (index >= D_001E5C20)
        return 0;
    D_0029E6C8[index] = value;
    return 1;
}