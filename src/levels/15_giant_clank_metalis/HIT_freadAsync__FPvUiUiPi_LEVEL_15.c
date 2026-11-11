/* LEVEL_15:0x0DE428 -- placement copy of LEVEL_01_11A0C8.c: range-checks an index, clears two flag bytes, and records a failed call result. */

extern char D_00268E60[];
extern char D_00268E80[];

int func_022F08(int a, void *b, int c);

int HIT_freadAsync__FPvUiUiPi(void *p, int x, int y, int n)
{
    char *flagA;
    char *flagB;
    int r;

    n = n - 1;
    if ((unsigned int)n >= 0x20) {
        return 1;
    }
    flagB = D_00268E80 + n;
    flagA = D_00268E60 + n;
    *flagA = 0;
    *flagB = 0;
    r = func_022F08(n, p, x * y);
    if (r >= 0) {
        return 0;
    }
    *flagB = 1;
    return 1;
}
