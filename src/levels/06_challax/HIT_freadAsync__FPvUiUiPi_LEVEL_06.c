/* LEVEL_06:0x110698 -- placement copy of LEVEL_01_11A0C8.c: range-checks an index, clears two flag bytes, and records a failed call result. */

extern char D_0033E570[];
extern char D_0033E590[];

int func_027B18(int a, void *b, int c);

int HIT_freadAsync__FPvUiUiPi(void *p, int x, int y, int n)
{
    char *flagA;
    char *flagB;
    int r;

    n = n - 1;
    if ((unsigned int)n >= 0x20) {
        return 1;
    }
    flagB = D_0033E590 + n;
    flagA = D_0033E570 + n;
    *flagA = 0;
    *flagB = 0;
    r = func_027B18(n, p, x * y);
    if (r >= 0) {
        return 0;
    }
    *flagB = 1;
    return 1;
}
