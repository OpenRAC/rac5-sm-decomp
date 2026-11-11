extern int func_0F9448(float);
extern int D_00121730[];

int func_0001A8(int value)
{
    int *table = D_00121730;
    float position = (float)value * 0.25f + 1.0f;
    int index = func_0F9448(position);
    return table[index];
}
