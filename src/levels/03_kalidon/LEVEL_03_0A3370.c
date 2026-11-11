extern int D_0020EF20;
extern int D_002CD688[];

int func_0A3370(int index, int value)
{
    if (index >= D_0020EF20)
        return 0;
    D_002CD688[index] = value;
    return 1;
}