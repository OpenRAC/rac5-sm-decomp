extern int func_233E00(float);
extern int D_002553B0[];

int func_0001A8(int value)
{
    int *table = D_002553B0;
    float position = (float)value * 0.25f + 1.0f;
    int index = func_233E00(position);
    return table[index];
}
