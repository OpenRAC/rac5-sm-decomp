extern int D_00214D50[];
extern int D_00214D58[];

void func_0b58a0(int index)
{
    int v = D_00214D50[index];

    if (v != 0 && --D_00214D50[index] != 0) {
        D_00214D58[index] = D_00214D58[index] + 8;
    } else {
        D_00214D58[index] = D_00214D58[index] - 8;
    }
    {
        int max = 0xc4;
        if (D_00214D58[index] > max)
            D_00214D58[index] = max;
    }
    if (D_00214D58[index] < 0)
        D_00214D58[index] = 0;
}
