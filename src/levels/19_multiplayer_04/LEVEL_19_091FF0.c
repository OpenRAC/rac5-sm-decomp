extern int D_001A59F0;
extern int D_0026A4D8[];

int func_091FF0(int index, int value)
{
    if (index >= D_001A59F0)
        return 0;
    D_0026A4D8[index] = value;
    return 1;
}