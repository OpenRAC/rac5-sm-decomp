/* LEVEL_17:0x022070 -- placement copy of LEVEL_16_0226F0.c: scans 25 slots, returns whether a flagged byte is set. */
int func_022210(int a, int b);
int func_021FE0(int a, void *b, int c);
int func_021E50(int a, void *b, int c, int d);
int func_021A48(int a, int b);

int func_022070(void *p)
{
    unsigned int i;
    unsigned int j;

    for (i = 0; i < 25; i++) {
        if (func_022210(i, -1) == 0) {
            continue;
        }
        for (j = 0; j < 3; j++) {
            if (func_021FE0(i, p, -1) != 0) {
                continue;
            }
            if (func_021E50(i, p, j, -1) != 0) {
                return ((unsigned char *)(func_021A48(i, -1) + j))[0x4B] != 0;
            }
        }
    }
    return 0;
}
