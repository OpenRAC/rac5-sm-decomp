extern int D_0020FD60;
extern int D_002CD008[];

int func_0A8800(int index, int value)
{
    if (index >= D_0020FD60)
        return 0;
    D_002CD008[index] = value;
    return 1;
}