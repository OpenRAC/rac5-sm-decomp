extern int D_002109D0[];
extern int D_002109D8[];

void func_0b7b18(int index)
{
    int v = D_002109D0[index];

    if (v != 0 && --D_002109D0[index] != 0) {
        D_002109D8[index] = D_002109D8[index] + 8;
    } else {
        D_002109D8[index] = D_002109D8[index] - 8;
    }
    {
        int max = 0xc4;
        if (D_002109D8[index] > max)
            D_002109D8[index] = max;
    }
    if (D_002109D8[index] < 0)
        D_002109D8[index] = 0;
}
