extern int D_001FF474;
extern int D_002A5A08[1];
extern int D_002A5A10[1];

int func_105000(int count, int size)
{
    unsigned int i;
    int need = count * size * 6;

    for (i = 0; i < 1; i++) {
        int bit = D_001FF474 & (1 << i);
        if (bit) {
            int b = D_002A5A08[i];
            int aligned = (b + 3) & -4;
            D_002A5A08[i] = aligned;
            D_002A5A10[i] -= aligned - b;
        }
    }
    if (D_002A5A10[0] < need * 0x30)
        return 0;
    return D_002A5A08[0];
}
