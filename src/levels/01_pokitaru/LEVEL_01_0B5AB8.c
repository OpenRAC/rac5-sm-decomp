extern int D_001FC6D0[];
extern int D_001FC6D8[];

void func_0b5ab8(int index)
{
    int v = D_001FC6D0[index];

    if (v != 0 && --D_001FC6D0[index] != 0) {
        D_001FC6D8[index] = D_001FC6D8[index] + 8;
    } else {
        D_001FC6D8[index] = D_001FC6D8[index] - 8;
    }
    {
        int max = 0xc4;
        if (D_001FC6D8[index] > max)
            D_001FC6D8[index] = max;
    }
    if (D_001FC6D8[index] < 0)
        D_001FC6D8[index] = 0;
}
