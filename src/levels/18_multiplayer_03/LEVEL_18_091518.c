/* LEVEL_18:0x091518 -- placement copy of LEVEL_01_0A32E8.c: queries a helper for a slot index, storing a second result in a table when given a nonzero argument. */
extern int D_001A5CF0;
extern int D_00269AD8[];
extern unsigned int func_00091900(int, int, int, int, int, int, int, int);
extern int func_00092180(int);

unsigned int func_091518(char *param_1)
{
    unsigned int n;
    int key;
    unsigned char buf[4];

    if (param_1 == 0) {
        return func_00091900(0, 0, 0, (int)buf, 1, 0, 0, 0);
    }
    if (D_001A5CF0 < 0x300) {
        key = *(int *)(param_1 + 0x68);
        buf[1] = 0;
        n = func_00091900((int)(param_1 + 0xC0), key, 1,
                      (int)buf | 1, 1, 0, 0, 0);
        D_00269AD8[n] = func_00092180((int)(param_1 + 4));
        return n;
    }
    return -1;
}
