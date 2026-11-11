/* LEVEL_18:0x0F8FF0 -- placement copy of LEVEL_01_11A0C8.c: range-checks an index, clears two flag bytes, and records a failed call result. */

extern char D_0029FA20[];
extern char D_0029FA40[];

int func_026738(int a, void *b, int c);

int func_0F8FF0(void *p, int x, int y, int n)
{
    char *flagA;
    char *flagB;
    int r;

    n = n - 1;
    if ((unsigned int)n >= 0x20) {
        return 1;
    }
    flagB = D_0029FA40 + n;
    flagA = D_0029FA20 + n;
    *flagA = 0;
    *flagB = 0;
    r = func_026738(n, p, x * y);
    if (r >= 0) {
        return 0;
    }
    *flagB = 1;
    return 1;
}
