/* LEVEL_16:0x092508 -- placement copy of LEVEL_01_0A32E8.c: queries a helper for a slot index, storing a second result in a table when given a nonzero argument. */
extern int D_001A4870;
extern int D_00269758[];
extern unsigned int func_000928F0(int, int, int, int, int, int, int, int);
extern int func_00093170(int);

unsigned int func_092508(char *param_1)
{
    unsigned int n;
    int key;
    unsigned char buf[4];

    if (param_1 == 0) {
        return func_000928F0(0, 0, 0, (int)buf, 1, 0, 0, 0);
    }
    if (D_001A4870 < 0x300) {
        key = *(int *)(param_1 + 0x68);
        buf[1] = 0;
        n = func_000928F0((int)(param_1 + 0xC0), key, 1,
                      (int)buf | 1, 1, 0, 0, 0);
        D_00269758[n] = func_00093170((int)(param_1 + 4));
        return n;
    }
    return -1;
}
