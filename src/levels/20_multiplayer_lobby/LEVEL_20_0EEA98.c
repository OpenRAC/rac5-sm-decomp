/* LEVEL_20:0x0EEA98 -- placement copy of LEVEL_16_11C6F0.c: steps two fade levels toward 255 or 0 depending on their countdowns, clamping to the byte range. */
extern int D_0011ABC8[2];
extern int D_0011ABD0[2];

void func_0EEA98(void)
{
    unsigned int i;
    int *v;
    int value;
    int hi;
    int lo;

    lo = 0;
    for (i = 0; i < 2; i++) {
        if (D_0011ABD0[i] != 0) {
            D_0011ABD0[i]--;
        }
        v = &D_0011ABC8[i];
        if (D_0011ABD0[i] == 0) {
            value = D_0011ABC8[i] - 8;
        } else {
            value = D_0011ABC8[i] + 8;
        }
        *v = value;
        hi = 0xFF;
        if (D_0011ABC8[i] > hi) {
            D_0011ABC8[i] = hi;
        }
        if (D_0011ABC8[i] < lo) {
            D_0011ABC8[i] = 0;
        }
    }
}
