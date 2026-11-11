extern int func_1DA670(float);
extern int D_001FA630[];

int func_0001A8(int value)
{
    int *table = D_001FA630;
    float position = (float)value * 0.25f + 1.0f;
    int index = func_1DA670(position);
    return table[index];
}
