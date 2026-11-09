/* LEVEL_05:0x1160E8 -- placement copy of LEVEL_01_11A0C8.c: range-checks an index, clears two flag bytes, and records a failed call result. */

extern char D_0033D6B0[];
extern char D_0033D6D0[];

int func_0283A8(int a, void *b, int c);

int func_1160E8(void *p, int x, int y, int n)
{
    char *flagA;
    char *flagB;
    int r;

    n = n - 1;
    if ((unsigned int)n >= 0x20) {
        return 1;
    }
    flagB = D_0033D6D0 + n;
    flagA = D_0033D6B0 + n;
    *flagA = 0;
    *flagB = 0;
    r = func_0283A8(n, p, x * y);
    if (r >= 0) {
        return 0;
    }
    *flagB = 1;
    return 1;
}
