extern int D_0020B434;
extern int D_002B3B08[1];
extern int D_002B3B10[1];

int func_10AFD8(int count, int size)
{
    unsigned int i;
    int need = count * size * 6;

    for (i = 0; i < 1; i++) {
        int bit = D_0020B434 & (1 << i);
        if (bit) {
            int b = D_002B3B08[i];
            int aligned = (b + 3) & -4;
            D_002B3B08[i] = aligned;
            D_002B3B10[i] -= aligned - b;
        }
    }
    if (D_002B3B10[0] < need * 0x30)
        return 0;
    return D_002B3B08[0];
}
