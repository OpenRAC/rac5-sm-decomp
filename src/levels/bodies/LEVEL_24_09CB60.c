/* LEVEL_24:0x09CB60 -- placement copy of LEVEL_01_0A32E8.c: queries a helper for a slot index, storing a second result in a table when given a nonzero argument. */
extern int D_001C7520;
extern int D_0027DAC8[];
extern unsigned int func_0009CFF8(int, int, int, int, int, int, int, int);
extern int func_0009D878(int);

unsigned int func_09CB60(char *param_1)
{
    unsigned int n;
    int key;
    unsigned char buf[4];

    if (param_1 == 0) {
        return func_0009CFF8(0, 0, 0, (int)buf, 1, 0, 0, 0);
    }
    if (D_001C7520 < 0x300) {
        key = *(int *)(param_1 + 0x68);
        buf[1] = 0;
        n = func_0009CFF8((int)(param_1 + 0xC0), key, 1,
                      (int)buf | 1, 1, 0, 0, 0);
        D_0027DAC8[n] = func_0009D878((int)(param_1 + 4));
        return n;
    }
    return -1;
}
