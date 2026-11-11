extern int D_001CD350[];
extern int D_001CD358[];

void func_0af348(int index)
{
    int v = D_001CD350[index];

    if (v != 0 && --D_001CD350[index] != 0) {
        D_001CD358[index] = D_001CD358[index] + 8;
    } else {
        D_001CD358[index] = D_001CD358[index] - 8;
    }
    {
        int max = 0xc4;
        if (D_001CD358[index] > max)
            D_001CD358[index] = max;
    }
    if (D_001CD358[index] < 0)
        D_001CD358[index] = 0;
}
