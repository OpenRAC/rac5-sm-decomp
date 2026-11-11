extern int func_1FF5F0(float);
extern int D_00220430[];

int func_0001A8(int value)
{
    int *table = D_00220430;
    float position = (float)value * 0.25f + 1.0f;
    int index = func_1FF5F0(position);
    return table[index];
}
