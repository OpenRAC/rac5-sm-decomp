/* LEVEL_20:0x0D3618 -- placement copy of LEVEL_01_11A0C8.c: range-checks an index, clears two flag bytes, and records a failed call result. */

extern char D_001C2EE0[];
extern char D_001C2F00[];

int func_023C90(int a, void *b, int c);

int HIT_freadAsync__FPvUiUiPi(void *p, int x, int y, int n)
{
    char *flagA;
    char *flagB;
    int r;

    n = n - 1;
    if ((unsigned int)n >= 0x20) {
        return 1;
    }
    flagB = D_001C2F00 + n;
    flagA = D_001C2EE0 + n;
    *flagA = 0;
    *flagB = 0;
    r = func_023C90(n, p, x * y);
    if (r >= 0) {
        return 0;
    }
    *flagB = 1;
    return 1;
}
