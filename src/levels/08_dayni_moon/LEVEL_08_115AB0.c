extern int D_0023F334;
extern int D_002EB888[1];
extern int D_002EB890[1];

int func_115AB0(int count, int size)
{
    unsigned int i;
    int need = count * size * 6;

    for (i = 0; i < 1; i++) {
        int bit = D_0023F334 & (1 << i);
        if (bit) {
            int b = D_002EB888[i];
            int aligned = (b + 3) & -4;
            D_002EB888[i] = aligned;
            D_002EB890[i] -= aligned - b;
        }
    }
    if (D_002EB890[0] < need * 0x30)
        return 0;
    return D_002EB888[0];
}
