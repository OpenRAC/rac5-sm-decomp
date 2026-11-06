extern int D_001E06A0;
extern int D_00299F88[];

int func_0A08A0(int index, int value)
{
    if (index >= D_001E06A0)
        return 0;
    D_00299F88[index] = value;
    return 1;
}