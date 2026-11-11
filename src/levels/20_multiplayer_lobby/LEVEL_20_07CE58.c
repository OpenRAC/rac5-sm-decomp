extern int D_00106F50;
extern int D_0018DB98[];

int func_07CE58(int index, int value)
{
    if (index >= D_00106F50)
        return 0;
    D_0018DB98[index] = value;
    return 1;
}