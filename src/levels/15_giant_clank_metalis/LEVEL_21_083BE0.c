/* LEVEL_21:0x083BE0 -- placement copy of LEVEL_01_0A32E8.c: queries a helper for a slot index, storing a second result in a table when given a nonzero argument. */
extern int D_0014B520;
extern int D_001C9C48[];
extern unsigned int func_00084078(int, int, int, int, int, int, int, int);
extern int func_000848F8(int);

unsigned int func_083BE0(char *param_1)
{
    unsigned int n;
    int key;
    unsigned char buf[4];

    if (param_1 == 0) {
        return func_00084078(0, 0, 0, (int)buf, 1, 0, 0, 0);
    }
    if (D_0014B520 < 0x300) {
        key = *(int *)(param_1 + 0x68);
        buf[1] = 0;
        n = func_00084078((int)(param_1 + 0xC0), key, 1,
                      (int)buf | 1, 1, 0, 0, 0);
        D_001C9C48[n] = func_000848F8((int)(param_1 + 4));
        return n;
    }
    return -1;
}
