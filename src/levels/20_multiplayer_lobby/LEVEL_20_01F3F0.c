/* LEVEL_20:0x01F3F0 -- placement copy of LEVEL_16_0226F0.c: scans 25 slots, returns whether a flagged byte is set. */
int func_01F590(int a, int b);
int func_01F360(int a, void *b, int c);
int func_01F1D0(int a, void *b, int c, int d);
int func_01EDC8(int a, int b);

int func_01F3F0(void *p)
{
    unsigned int i;
    unsigned int j;

    for (i = 0; i < 25; i++) {
        if (func_01F590(i, -1) == 0) {
            continue;
        }
        for (j = 0; j < 3; j++) {
            if (func_01F360(i, p, -1) != 0) {
                continue;
            }
            if (func_01F1D0(i, p, j, -1) != 0) {
                return ((unsigned char *)(func_01EDC8(i, -1) + j))[0x4B] != 0;
            }
        }
    }
    return 0;
}
