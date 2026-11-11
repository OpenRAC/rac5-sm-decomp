extern int D_0014B520;
extern int D_001CA848[];

int func_083EE8(int index, int value)
{
    if (index >= D_0014B520)
        return 0;
    D_001CA848[index] = value;
    return 1;
}