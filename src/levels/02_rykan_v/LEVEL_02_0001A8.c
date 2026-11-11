extern int func_1FFF10(float);
extern int D_002206B0[];

int func_0001A8(int value)
{
    int *table = D_002206B0;
    float position = (float)value * 0.25f + 1.0f;
    int index = func_1FFF10(position);
    return table[index];
}
