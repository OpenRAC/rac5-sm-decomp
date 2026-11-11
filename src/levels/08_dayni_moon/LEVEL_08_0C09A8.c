extern int D_00245590[];
extern int D_00245598[];

void func_0c09a8(int index)
{
    int v = D_00245590[index];

    if (v != 0 && --D_00245590[index] != 0) {
        D_00245598[index] = D_00245598[index] + 8;
    } else {
        D_00245598[index] = D_00245598[index] - 8;
    }
    {
        int max = 0xc4;
        if (D_00245598[index] > max)
            D_00245598[index] = max;
    }
    if (D_00245598[index] < 0)
        D_00245598[index] = 0;
}
