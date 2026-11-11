extern int func_1D50E0(float);
extern int D_001F5330[];

int func_0001A8(int value)
{
    int *table = D_001F5330;
    float position = (float)value * 0.25f + 1.0f;
    int index = func_1D50E0(position);
    return table[index];
}
