extern int D_0010CE30[];
extern int D_0010CE38[];

void func_08f140(int index)
{
    int v = D_0010CE30[index];

    if (v != 0 && --D_0010CE30[index] != 0) {
        D_0010CE38[index] = D_0010CE38[index] + 8;
    } else {
        D_0010CE38[index] = D_0010CE38[index] - 8;
    }
    {
        int max = 0xc4;
        if (D_0010CE38[index] > max)
            D_0010CE38[index] = max;
    }
    if (D_0010CE38[index] < 0)
        D_0010CE38[index] = 0;
}
