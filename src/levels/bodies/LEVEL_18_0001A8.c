extern int func_1981B8(float);
extern int D_001C1C30[];

int func_0001A8(int value)
{
    int *table = D_001C1C30;
    float position = (float)value * 0.25f + 1.0f;
    int index = func_1981B8(position);
    return table[index];
}
