/* LEVEL_17:0x0F9DC8 -- placement copy of LEVEL_01_11A0C8.c: range-checks an index, clears two flag bytes, and records a failed call result. */

extern char D_002909A0[];
extern char D_002909C0[];

int func_026B08(int a, void *b, int c);

int HIT_freadAsync__FPvUiUiPi(void *p, int x, int y, int n)
{
    char *flagA;
    char *flagB;
    int r;

    n = n - 1;
    if ((unsigned int)n >= 0x20) {
        return 1;
    }
    flagB = D_002909C0 + n;
    flagA = D_002909A0 + n;
    *flagA = 0;
    *flagB = 0;
    r = func_026B08(n, p, x * y);
    if (r >= 0) {
        return 0;
    }
    *flagB = 1;
    return 1;
}
