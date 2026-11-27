/* LEVEL_17:0x11C068 -- placement copy of LEVEL_16_11C6F0.c: steps two fade levels toward 255 or 0 depending on their countdowns, clamping to the byte range. */
extern int D_001ABB20[2];
extern int D_001ABB28[2];

void func_11C068(void)
{
    unsigned int i;
    int *v;
    int value;
    int hi;
    int lo;

    lo = 0;
    for (i = 0; i < 2; i++) {
        if (D_001ABB28[i] != 0) {
            D_001ABB28[i]--;
        }
        v = &D_001ABB20[i];
        if (D_001ABB28[i] == 0) {
            value = D_001ABB20[i] - 8;
        } else {
            value = D_001ABB20[i] + 8;
        }
        *v = value;
        hi = 0xFF;
        if (D_001ABB20[i] > hi) {
            D_001ABB20[i] = hi;
        }
        if (D_001ABB20[i] < lo) {
            D_001ABB20[i] = 0;
        }
    }
}
