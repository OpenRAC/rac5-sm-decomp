extern int func_1EB278(float);
extern int D_0020B730[];

int func_0001A8(int value)
{
    int *table = D_0020B730;
    float position = (float)value * 0.25f + 1.0f;
    int index = func_1EB278(position);
    return table[index];
}
