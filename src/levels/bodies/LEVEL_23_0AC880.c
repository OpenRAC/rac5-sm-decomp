extern int D_001CFAD0[];
extern int D_001CFAD8[];

void func_0ac880(int index)
{
    int v = D_001CFAD0[index];

    if (v != 0 && --D_001CFAD0[index] != 0) {
        D_001CFAD8[index] = D_001CFAD8[index] + 8;
    } else {
        D_001CFAD8[index] = D_001CFAD8[index] - 8;
    }
    {
        int max = 0xc4;
        if (D_001CFAD8[index] > max)
            D_001CFAD8[index] = max;
    }
    if (D_001CFAD8[index] < 0)
        D_001CFAD8[index] = 0;
}
