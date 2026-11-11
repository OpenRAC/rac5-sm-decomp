/* LEVEL_02:0x0A9BF8 -- placement copy of LEVEL_01_0A32E8.c: queries a helper for a slot index, storing a second result in a table when given a nonzero argument. */
extern int D_0020B860;
extern int D_002C9108[];
extern unsigned int func_000AA090(int, int, int, int, int, int, int, int);
extern int func_000AA910(int);

unsigned int func_0A9BF8(char *param_1)
{
    unsigned int n;
    int key;
    unsigned char buf[4];

    if (param_1 == 0) {
        return func_000AA090(0, 0, 0, (int)buf, 1, 0, 0, 0);
    }
    if (D_0020B860 < 0x300) {
        key = *(int *)(param_1 + 0x68);
        buf[1] = 0;
        n = func_000AA090((int)(param_1 + 0xC0), key, 1,
                      (int)buf | 1, 1, 0, 0, 0);
        D_002C9108[n] = func_000AA910((int)(param_1 + 4));
        return n;
    }
    return -1;
}
