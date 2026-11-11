extern int D_0019DD50[];
extern int D_0019DD58[];

void func_0a3fa8(int index)
{
    int v = D_0019DD50[index];

    if (v != 0 && --D_0019DD50[index] != 0) {
        D_0019DD58[index] = D_0019DD58[index] + 8;
    } else {
        D_0019DD58[index] = D_0019DD58[index] - 8;
    }
    {
        int max = 0xc4;
        if (D_0019DD58[index] > max)
            D_0019DD58[index] = max;
    }
    if (D_0019DD58[index] < 0)
        D_0019DD58[index] = 0;
}
