extern int D_00211690[];
extern int D_00211698[];

void func_0bc3c8(int index)
{
    int v = D_00211690[index];

    if (v != 0 && --D_00211690[index] != 0) {
        D_00211698[index] = D_00211698[index] + 8;
    } else {
        D_00211698[index] = D_00211698[index] - 8;
    }
    {
        int max = 0xc4;
        if (D_00211698[index] > max)
            D_00211698[index] = max;
    }
    if (D_00211698[index] < 0)
        D_00211698[index] = 0;
}
