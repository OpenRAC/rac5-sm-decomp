/* LEVEL_09:0x0A0598 -- placement copy of LEVEL_01_0A32E8.c: queries a helper for a slot index, storing a second result in a table when given a nonzero argument. */
extern int D_001E06A0;
extern int D_00299388[];
extern unsigned int func_000A0A30(int, int, int, int, int, int, int, int);
extern int func_000A12B0(int);

unsigned int func_0A0598(char *param_1)
{
    unsigned int n;
    int key;
    unsigned char buf[4];

    if (param_1 == 0) {
        return func_000A0A30(0, 0, 0, (int)buf, 1, 0, 0, 0);
    }
    if (D_001E06A0 < 0x300) {
        key = *(int *)(param_1 + 0x68);
        buf[1] = 0;
        n = func_000A0A30((int)(param_1 + 0xC0), key, 1,
                      (int)buf | 1, 1, 0, 0, 0);
        D_00299388[n] = func_000A12B0((int)(param_1 + 4));
        return n;
    }
    return -1;
}
