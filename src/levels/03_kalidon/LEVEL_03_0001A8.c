extern int func_203908(float);
extern int D_00224630[];

int func_0001A8(int value)
{
    int *table = D_00224630;
    float position = (float)value * 0.25f + 1.0f;
    int index = func_203908(position);
    return table[index];
}
