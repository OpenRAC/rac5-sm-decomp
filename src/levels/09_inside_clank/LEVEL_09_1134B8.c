/* LEVEL_09:0x1134B8 -- placement copy of LEVEL_01_11A0C8.c: range-checks an index, clears two flag bytes, and records a failed call result. */

extern char D_00338F70[];
extern char D_00338F90[];

int func_028598(int a, void *b, int c);

int func_1134B8(void *p, int x, int y, int n)
{
    char *flagA;
    char *flagB;
    int r;

    n = n - 1;
    if ((unsigned int)n >= 0x20) {
        return 1;
    }
    flagB = D_00338F90 + n;
    flagA = D_00338F70 + n;
    *flagA = 0;
    *flagB = 0;
    r = func_028598(n, p, x * y);
    if (r >= 0) {
        return 0;
    }
    *flagB = 1;
    return 1;
}
