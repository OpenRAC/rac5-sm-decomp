/* LEVEL_20:0x07CC00 -- placement copy of LEVEL_01_0A32E8.c: queries a helper for a slot index, storing a second result in a table when given a nonzero argument. */
extern int D_00106F50;
extern int D_0018CF98[];
extern unsigned int func_0007CFE8(int, int, int, int, int, int, int, int);
extern int func_0007D868(int);

unsigned int func_07CC00(char *param_1)
{
    unsigned int n;
    int key;
    unsigned char buf[4];

    if (param_1 == 0) {
        return func_0007CFE8(0, 0, 0, (int)buf, 1, 0, 0, 0);
    }
    if (D_00106F50 < 0x300) {
        key = *(int *)(param_1 + 0x68);
        buf[1] = 0;
        n = func_0007CFE8((int)(param_1 + 0xC0), key, 1,
                      (int)buf | 1, 1, 0, 0, 0);
        D_0018CF98[n] = func_0007D868((int)(param_1 + 4));
        return n;
    }
    return -1;
}
