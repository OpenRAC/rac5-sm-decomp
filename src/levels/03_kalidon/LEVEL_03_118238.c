/* LEVEL_03:0x118238 -- placement copy of LEVEL_01_11A0C8.c: range-checks an index, clears two flag bytes, and records a failed call result. */

extern char D_0036C670[];
extern char D_0036C690[];

int func_029528(int a, void *b, int c);

int func_118238(void *p, int x, int y, int n)
{
    char *flagA;
    char *flagB;
    int r;

    n = n - 1;
    if ((unsigned int)n >= 0x20) {
        return 1;
    }
    flagB = D_0036C690 + n;
    flagA = D_0036C670 + n;
    *flagA = 0;
    *flagB = 0;
    r = func_029528(n, p, x * y);
    if (r >= 0) {
        return 0;
    }
    *flagB = 1;
    return 1;
}
