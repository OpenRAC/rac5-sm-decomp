/* LEVEL_05:0x0A18A8 -- placement copy of LEVEL_01_0A32E8.c: queries a helper for a slot index, storing a second result in a table when given a nonzero argument. */
extern int D_001E5C20;
extern int D_0029DAC8[];
extern unsigned int func_000A1D40(int, int, int, int, int, int, int, int);
extern int func_000A25C0(int);

unsigned int func_0A18A8(char *param_1)
{
    unsigned int n;
    int key;
    unsigned char buf[4];

    if (param_1 == 0) {
        return func_000A1D40(0, 0, 0, (int)buf, 1, 0, 0, 0);
    }
    if (D_001E5C20 < 0x300) {
        key = *(int *)(param_1 + 0x68);
        buf[1] = 0;
        n = func_000A1D40((int)(param_1 + 0xC0), key, 1,
                      (int)buf | 1, 1, 0, 0, 0);
        D_0029DAC8[n] = func_000A25C0((int)(param_1 + 4));
        return n;
    }
    return -1;
}
