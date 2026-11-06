extern int func_1BE6B8(float);
extern int D_001DE8B0[];

int func_0001A8(int value)
{
    int *table = D_001DE8B0;
    float position = (float)value * 0.25f + 1.0f;
    int index = func_1BE6B8(position);
    return table[index];
}
