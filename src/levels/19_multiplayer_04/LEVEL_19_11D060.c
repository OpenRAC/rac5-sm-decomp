/* LEVEL_19:0x11D060 -- placement copy of LEVEL_16_11C6F0.c: steps two fade levels toward 255 or 0 depending on their countdowns, clamping to the byte range. */
extern int D_001B96A0[2];
extern int D_001B96A8[2];

void func_11D060(void)
{
    unsigned int i;
    int *v;
    int value;
    int hi;
    int lo;

    lo = 0;
    for (i = 0; i < 2; i++) {
        if (D_001B96A8[i] != 0) {
            D_001B96A8[i]--;
        }
        v = &D_001B96A0[i];
        if (D_001B96A8[i] == 0) {
            value = D_001B96A0[i] - 8;
        } else {
            value = D_001B96A0[i] + 8;
        }
        *v = value;
        hi = 0xFF;
        if (D_001B96A0[i] > hi) {
            D_001B96A0[i] = hi;
        }
        if (D_001B96A0[i] < lo) {
            D_001B96A0[i] = 0;
        }
    }
}
