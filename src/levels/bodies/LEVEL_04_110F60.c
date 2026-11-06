extern int D_0020F934;
extern int D_002B6E08[1];
extern int D_002B6E10[1];

int func_110F60(int count, int size)
{
    unsigned int i;
    int need = count * size * 6;

    for (i = 0; i < 1; i++) {
        int bit = D_0020F934 & (1 << i);
        if (bit) {
            int b = D_002B6E08[i];
            int aligned = (b + 3) & -4;
            D_002B6E08[i] = aligned;
            D_002B6E10[i] -= aligned - b;
        }
    }
    if (D_002B6E10[0] < need * 0x30)
        return 0;
    return D_002B6E08[0];
}
