extern int D_001E0274;
extern int D_00283D88[1];
extern int D_00283D90[1];

int func_100D08(int count, int size)
{
    unsigned int i;
    int need = count * size * 6;

    for (i = 0; i < 1; i++) {
        int bit = D_001E0274 & (1 << i);
        if (bit) {
            int b = D_00283D88[i];
            int aligned = (b + 3) & -4;
            D_00283D88[i] = aligned;
            D_00283D90[i] -= aligned - b;
        }
    }
    if (D_00283D90[0] < need * 0x30)
        return 0;
    return D_00283D88[0];
}
