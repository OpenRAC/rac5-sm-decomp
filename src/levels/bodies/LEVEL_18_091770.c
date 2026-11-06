extern int D_001A5CF0;
extern int D_0026A6D8[];

int func_091770(int index, int value)
{
    if (index >= D_001A5CF0)
        return 0;
    D_0026A6D8[index] = value;
    return 1;
}