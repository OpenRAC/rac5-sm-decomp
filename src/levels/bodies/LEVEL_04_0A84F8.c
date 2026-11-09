/* LEVEL_04:0x0A84F8 -- placement copy of LEVEL_01_0A32E8.c: queries a helper for a slot index, storing a second result in a table when given a nonzero argument. */
extern int D_0020FD60;
extern int D_002CC408[];
extern unsigned int func_000A8990(int, int, int, int, int, int, int, int);
extern int func_000A9210(int);

unsigned int func_0A84F8(char *param_1)
{
    unsigned int n;
    int key;
    unsigned char buf[4];

    if (param_1 == 0) {
        return func_000A8990(0, 0, 0, (int)buf, 1, 0, 0, 0);
    }
    if (D_0020FD60 < 0x300) {
        key = *(int *)(param_1 + 0x68);
        buf[1] = 0;
        n = func_000A8990((int)(param_1 + 0xC0), key, 1,
                      (int)buf | 1, 1, 0, 0, 0);
        D_002CC408[n] = func_000A9210((int)(param_1 + 4));
        return n;
    }
    return -1;
}
