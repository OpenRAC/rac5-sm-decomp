extern int func_13FF70(float);
extern int D_0015FEB0[];

int func_0001A8(int value)
{
    int *table = D_0015FEB0;
    float position = (float)value * 0.25f + 1.0f;
    int index = func_13FF70(position);
    return table[index];
}
