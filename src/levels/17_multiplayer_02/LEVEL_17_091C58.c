extern int D_00197E70;
extern int D_0025B658[];

int func_091C58(int index, int value)
{
    if (index >= D_00197E70)
        return 0;
    D_0025B658[index] = value;
    return 1;
}