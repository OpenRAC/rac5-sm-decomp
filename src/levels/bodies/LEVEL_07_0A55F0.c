extern int D_0020ABA0;
extern int D_002C8108[];

int func_0A55F0(int index, int value)
{
    if (index >= D_0020ABA0)
        return 0;
    D_002C8108[index] = value;
    return 1;
}