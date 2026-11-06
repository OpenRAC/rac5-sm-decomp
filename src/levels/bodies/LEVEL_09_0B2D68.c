extern int D_001E64D0[];
extern int D_001E64D8[];

void func_0b2d68(int index)
{
    int v = D_001E64D0[index];

    if (v != 0 && --D_001E64D0[index] != 0) {
        D_001E64D8[index] = D_001E64D8[index] + 8;
    } else {
        D_001E64D8[index] = D_001E64D8[index] - 8;
    }
    {
        int max = 0xc4;
        if (D_001E64D8[index] > max)
            D_001E64D8[index] = max;
    }
    if (D_001E64D8[index] < 0)
        D_001E64D8[index] = 0;
}
