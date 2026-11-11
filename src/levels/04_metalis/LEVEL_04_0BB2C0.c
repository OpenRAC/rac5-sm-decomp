extern int D_00215B90[];
extern int D_00215B98[];

void func_0bb2c0(int index)
{
    int v = D_00215B90[index];

    if (v != 0 && --D_00215B90[index] != 0) {
        D_00215B98[index] = D_00215B98[index] + 8;
    } else {
        D_00215B98[index] = D_00215B98[index] - 8;
    }
    {
        int max = 0xc4;
        if (D_00215B98[index] > max)
            D_00215B98[index] = max;
    }
    if (D_00215B98[index] < 0)
        D_00215B98[index] = 0;
}
