/* LEVEL_19:0x022330 -- placement copy of LEVEL_16_0226F0.c: scans 25 slots, returns whether a flagged byte is set. */
int func_0224D0(int a, int b);
int func_0222A0(int a, void *b, int c);
int func_022110(int a, void *b, int c, int d);
int func_021D08(int a, int b);

int func_022330(void *p)
{
    unsigned int i;
    unsigned int j;

    for (i = 0; i < 25; i++) {
        if (func_0224D0(i, -1) == 0) {
            continue;
        }
        for (j = 0; j < 3; j++) {
            if (func_0222A0(i, p, -1) != 0) {
                continue;
            }
            if (func_022110(i, p, j, -1) != 0) {
                return ((unsigned char *)(func_021D08(i, -1) + j))[0x4B] != 0;
            }
        }
    }
    return 0;
}
