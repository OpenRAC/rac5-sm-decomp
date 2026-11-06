extern int func_204438(float);
extern int D_002250B0[];

int func_0001A8(int value)
{
    int *table = D_002250B0;
    float position = (float)value * 0.25f + 1.0f;
    int index = func_204438(position);
    return table[index];
}
