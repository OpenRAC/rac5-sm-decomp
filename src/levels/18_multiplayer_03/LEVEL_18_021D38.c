/* LEVEL_18:0x021D38 -- placement copy of LEVEL_16_0226F0.c: scans 25 slots, returns whether a flagged byte is set. */
int func_021ED8(int a, int b);
int func_021CA8(int a, void *b, int c);
int func_021B18(int a, void *b, int c, int d);
int func_021710(int a, int b);

int func_021D38(void *p)
{
    unsigned int i;
    unsigned int j;

    for (i = 0; i < 25; i++) {
        if (func_021ED8(i, -1) == 0) {
            continue;
        }
        for (j = 0; j < 3; j++) {
            if (func_021CA8(i, p, -1) != 0) {
                continue;
            }
            if (func_021B18(i, p, j, -1) != 0) {
                return ((unsigned char *)(func_021710(i, -1) + j))[0x4B] != 0;
            }
        }
    }
    return 0;
}
