extern int D_001ABBD0[];
extern int D_001ABBD8[];

void func_0a3ac0(int index)
{
    int v = D_001ABBD0[index];

    if (v != 0 && --D_001ABBD0[index] != 0) {
        D_001ABBD8[index] = D_001ABBD8[index] + 8;
    } else {
        D_001ABBD8[index] = D_001ABBD8[index] - 8;
    }
    {
        int max = 0xc4;
        if (D_001ABBD8[index] > max)
            D_001ABBD8[index] = max;
    }
    if (D_001ABBD8[index] < 0)
        D_001ABBD8[index] = 0;
}
