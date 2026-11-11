extern int D_001E57F4;
extern int D_002884C8[1];
extern int D_002884D0[1];

int func_102508(int count, int size)
{
    unsigned int i;
    int need = count * size * 6;

    for (i = 0; i < 1; i++) {
        int bit = D_001E57F4 & (1 << i);
        if (bit) {
            int b = D_002884C8[i];
            int aligned = (b + 3) & -4;
            D_002884C8[i] = aligned;
            D_002884D0[i] -= aligned - b;
        }
    }
    if (D_002884D0[0] < need * 0x30)
        return 0;
    return D_002884C8[0];
}
