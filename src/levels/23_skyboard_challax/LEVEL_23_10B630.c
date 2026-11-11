/* LEVEL_23:0x10B630 -- placement copy of LEVEL_01_11A0C8.c: range-checks an index, clears two flag bytes, and records a failed call result. */

extern char D_00322C30[];
extern char D_00322C50[];

int func_0272A0(int a, void *b, int c);

int func_10B630(void *p, int x, int y, int n)
{
    char *flagA;
    char *flagB;
    int r;

    n = n - 1;
    if ((unsigned int)n >= 0x20) {
        return 1;
    }
    flagB = D_00322C50 + n;
    flagA = D_00322C30 + n;
    *flagA = 0;
    *flagB = 0;
    r = func_0272A0(n, p, x * y);
    if (r >= 0) {
        return 0;
    }
    *flagB = 1;
    return 1;
}
