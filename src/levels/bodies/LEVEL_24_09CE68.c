extern int D_001C7520;
extern int D_0027E6C8[];

int func_09CE68(int index, int value)
{
    if (index >= D_001C7520)
        return 0;
    D_0027E6C8[index] = value;
    return 1;
}