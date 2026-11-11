extern int D_001A4870;
extern int D_0026A358[];

int func_092760(int index, int value)
{
    if (index >= D_001A4870)
        return 0;
    D_0026A358[index] = value;
    return 1;
}