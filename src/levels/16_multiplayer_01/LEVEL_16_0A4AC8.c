extern int D_001AA750[];
extern int D_001AA758[];

void func_0a4ac8(int index)
{
    int v = D_001AA750[index];

    if (v != 0 && --D_001AA750[index] != 0) {
        D_001AA758[index] = D_001AA758[index] + 8;
    } else {
        D_001AA758[index] = D_001AA758[index] - 8;
    }
    {
        int max = 0xc4;
        if (D_001AA758[index] > max)
            D_001AA758[index] = max;
    }
    if (D_001AA758[index] < 0)
        D_001AA758[index] = 0;
}
