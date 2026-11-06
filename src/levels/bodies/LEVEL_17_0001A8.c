extern int func_18A360(float);
extern int D_001B3B30[];

int func_0001A8(int value)
{
    int *table = D_001B3B30;
    float position = (float)value * 0.25f + 1.0f;
    int index = func_18A360(position);
    return table[index];
}
