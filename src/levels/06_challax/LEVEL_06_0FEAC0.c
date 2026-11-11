extern int D_001E5374;
extern int D_00289388[1];
extern int D_00289390[1];

int func_0FEAC0(int count, int size)
{
    unsigned int i;
    int need = count * size * 6;

    for (i = 0; i < 1; i++) {
        int bit = D_001E5374 & (1 << i);
        if (bit) {
            int b = D_00289388[i];
            int aligned = (b + 3) & -4;
            D_00289388[i] = aligned;
            D_00289390[i] -= aligned - b;
        }
    }
    if (D_00289390[0] < need * 0x30)
        return 0;
    return D_00289388[0];
}
