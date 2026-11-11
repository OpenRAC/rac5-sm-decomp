extern int func_14A630(float);
extern int D_00168BB0[];

int func_0001A8(int value)
{
    int *table = D_00168BB0;
    float position = (float)value * 0.25f + 1.0f;
    int index = func_14A630(position);
    return table[index];
}
