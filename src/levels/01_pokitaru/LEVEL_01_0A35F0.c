extern int D_001F68A0;
extern int D_002B2808[];

int func_0A35F0(int index, int value)
{
    if (index >= D_001F68A0)
        return 0;
    D_002B2808[index] = value;
    return 1;
}