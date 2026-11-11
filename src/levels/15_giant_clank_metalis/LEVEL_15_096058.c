extern int D_00151350[];
extern int D_00151358[];

void func_096058(int index)
{
    int v = D_00151350[index];

    if (v != 0 && --D_00151350[index] != 0) {
        D_00151358[index] = D_00151358[index] + 8;
    } else {
        D_00151358[index] = D_00151358[index] - 8;
    }
    {
        int max = 0xc4;
        if (D_00151358[index] > max)
            D_00151358[index] = max;
    }
    if (D_00151358[index] < 0)
        D_00151358[index] = 0;
}
