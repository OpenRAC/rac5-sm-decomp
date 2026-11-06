extern int func_1DA1C0(float);
extern int D_001FA5B0[];

int func_0001A8(int value)
{
    int *table = D_001FA5B0;
    float position = (float)value * 0.25f + 1.0f;
    int index = func_1DA1C0(position);
    return table[index];
}
