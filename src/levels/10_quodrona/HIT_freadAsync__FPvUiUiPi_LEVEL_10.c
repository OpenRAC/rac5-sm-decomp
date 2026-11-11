/* LEVEL_10:0x1182E0 -- placement copy of LEVEL_01_11A0C8.c: range-checks an index, clears two flag bytes, and records a failed call result. */

extern char D_0035ABF0[];
extern char D_0035AC10[];

int func_029508(int a, void *b, int c);

int HIT_freadAsync__FPvUiUiPi(void *p, int x, int y, int n)
{
    char *flagA;
    char *flagB;
    int r;

    n = n - 1;
    if ((unsigned int)n >= 0x20) {
        return 1;
    }
    flagB = D_0035AC10 + n;
    flagA = D_0035ABF0 + n;
    *flagA = 0;
    *flagB = 0;
    r = func_029508(n, p, x * y);
    if (r >= 0) {
        return 0;
    }
    *flagB = 1;
    return 1;
}
