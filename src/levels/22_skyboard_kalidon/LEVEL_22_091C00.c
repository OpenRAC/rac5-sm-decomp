extern int D_00155C20;
extern int D_002083C8[];

int func_091C00(int index, int value)
{
    if (index >= D_00155C20)
        return 0;
    D_002083C8[index] = value;
    return 1;
}