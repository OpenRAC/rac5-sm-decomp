/* LEVEL_01:0x11A0C8 -- range-checks an index, clears two flag bytes, and records a failed call result. */

extern char D_003517F0[];
extern char D_00351810[];

int func_029730(int a, void *b, int c);

int HIT_freadAsync__FPvUiUiPi(void *p, int x, int y, int n)
{
    char *flagA;
    char *flagB;
    int r;

    n = n - 1;
    if ((unsigned int)n >= 0x20) {
        return 1;
    }
    flagB = D_00351810 + n;
    flagA = D_003517F0 + n;
    *flagA = 0;
    *flagB = 0;
    r = func_029730(n, p, x * y);
    if (r >= 0) {
        return 0;
    }
    *flagB = 1;
    return 1;
}
