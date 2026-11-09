/* LEVEL_23:0x09A028 -- placement copy of LEVEL_01_0A32E8.c: queries a helper for a slot index, storing a second result in a table when given a nonzero argument. */
extern int D_001C9CA0;
extern int D_00283048[];
extern unsigned int func_0009A4C0(int, int, int, int, int, int, int, int);
extern int func_0009AD40(int);

unsigned int func_09A028(char *param_1)
{
    unsigned int n;
    int key;
    unsigned char buf[4];

    if (param_1 == 0) {
        return func_0009A4C0(0, 0, 0, (int)buf, 1, 0, 0, 0);
    }
    if (D_001C9CA0 < 0x300) {
        key = *(int *)(param_1 + 0x68);
        buf[1] = 0;
        n = func_0009A4C0((int)(param_1 + 0xC0), key, 1,
                      (int)buf | 1, 1, 0, 0, 0);
        D_00283048[n] = func_0009AD40((int)(param_1 + 4));
        return n;
    }
    return -1;
}
