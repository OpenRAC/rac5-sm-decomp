extern int func_1BBF50(float);
extern int D_001DC4B0[];

int func_0001A8(int value)
{
    int *table = D_001DC4B0;
    float position = (float)value * 0.25f + 1.0f;
    int index = func_1BBF50(position);
    return table[index];
}
