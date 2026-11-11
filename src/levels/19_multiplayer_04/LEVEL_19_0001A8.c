extern int func_197EE0(float);
extern int D_001C18B0[];

int func_0001A8(int value)
{
    int *table = D_001C18B0;
    float position = (float)value * 0.25f + 1.0f;
    int index = func_197EE0(position);
    return table[index];
}
