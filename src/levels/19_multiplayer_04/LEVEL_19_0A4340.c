extern int D_001AB8D0[];
extern int D_001AB8D8[];

void func_0a4340(int index)
{
    int v = D_001AB8D0[index];

    if (v != 0 && --D_001AB8D0[index] != 0) {
        D_001AB8D8[index] = D_001AB8D8[index] + 8;
    } else {
        D_001AB8D8[index] = D_001AB8D8[index] - 8;
    }
    {
        int max = 0xc4;
        if (D_001AB8D8[index] > max)
            D_001AB8D8[index] = max;
    }
    if (D_001AB8D8[index] < 0)
        D_001AB8D8[index] = 0;
}
