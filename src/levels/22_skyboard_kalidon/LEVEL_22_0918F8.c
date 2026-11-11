/* LEVEL_22:0x0918F8 -- placement copy of LEVEL_01_0A32E8.c: queries a helper for a slot index, storing a second result in a table when given a nonzero argument. */
extern int D_00155C20;
extern int D_002077C8[];
extern unsigned int func_00091D90(int, int, int, int, int, int, int, int);
extern int func_00092610(int);

unsigned int func_0918F8(char *param_1)
{
    unsigned int n;
    int key;
    unsigned char buf[4];

    if (param_1 == 0) {
        return func_00091D90(0, 0, 0, (int)buf, 1, 0, 0, 0);
    }
    if (D_00155C20 < 0x300) {
        key = *(int *)(param_1 + 0x68);
        buf[1] = 0;
        n = func_00091D90((int)(param_1 + 0xC0), key, 1,
                      (int)buf | 1, 1, 0, 0, 0);
        D_002077C8[n] = func_00092610((int)(param_1 + 4));
        return n;
    }
    return -1;
}
