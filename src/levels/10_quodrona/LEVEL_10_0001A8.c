extern int func_1F42D0(float);
extern int D_002146B0[];

int func_0001A8(int value)
{
    int *table = D_002146B0;
    float position = (float)value * 0.25f + 1.0f;
    int index = func_1F42D0(position);
    return table[index];
}
