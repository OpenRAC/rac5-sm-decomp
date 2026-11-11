extern int D_0014B0F4;
extern int D_001B4648[1];
extern int D_001B4650[1];

int func_0D0500(int count, int size)
{
    unsigned int i;
    int need = count * size * 6;

    for (i = 0; i < 1; i++) {
        int bit = D_0014B0F4 & (1 << i);
        if (bit) {
            int b = D_001B4648[i];
            int aligned = (b + 3) & -4;
            D_001B4648[i] = aligned;
            D_001B4650[i] -= aligned - b;
        }
    }
    if (D_001B4650[0] < need * 0x30)
        return 0;
    return D_001B4648[0];
}
