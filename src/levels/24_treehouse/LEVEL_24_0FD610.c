extern int D_001C70F4;
extern int D_002684C8[1];
extern int D_002684D0[1];

int func_0FD610(int count, int size)
{
    unsigned int i;
    int need = count * size * 6;

    for (i = 0; i < 1; i++) {
        int bit = D_001C70F4 & (1 << i);
        if (bit) {
            int b = D_002684C8[i];
            int aligned = (b + 3) & -4;
            D_002684C8[i] = aligned;
            D_002684D0[i] -= aligned - b;
        }
    }
    if (D_002684D0[0] < need * 0x30)
        return 0;
    return D_002684C8[0];
}
