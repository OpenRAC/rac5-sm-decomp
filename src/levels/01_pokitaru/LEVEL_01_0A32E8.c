/* LEVEL_01:0x0A32E8 -- queries a helper for a slot index, storing a second result in a table when given a nonzero argument. */
extern int D_001F68A0;
extern int D_002B1C08[];
extern unsigned int func_000A3780(int, int, int, int, int, int, int, int);
extern int func_000A4000(int);

unsigned int func_0A32E8(char *param_1)
{
    unsigned int n;
    int key;
    unsigned char buf[4];

    if (param_1 == 0) {
        return func_000A3780(0, 0, 0, (int)buf, 1, 0, 0, 0);
    }
    if (D_001F68A0 < 0x300) {
        key = *(int *)(param_1 + 0x68);
        buf[1] = 0;
        n = func_000A3780((int)(param_1 + 0xC0), key, 1,
                      (int)buf | 1, 1, 0, 0, 0);
        D_002B1C08[n] = func_000A4000((int)(param_1 + 4));
        return n;
    }
    return -1;
}
