/* LEVEL_08:0x12A868 -- placement copy of LEVEL_01_11A0C8.c: range-checks an index, clears two flag bytes, and records a failed call result. */

extern char D_003A0A70[];
extern char D_003A0A90[];

int func_029CA8(int a, void *b, int c);

int func_12A868(void *p, int x, int y, int n)
{
    char *flagA;
    char *flagB;
    int r;

    n = n - 1;
    if ((unsigned int)n >= 0x20) {
        return 1;
    }
    flagB = D_003A0A90 + n;
    flagA = D_003A0A70 + n;
    *flagA = 0;
    *flagB = 0;
    r = func_029CA8(n, p, x * y);
    if (r >= 0) {
        return 0;
    }
    *flagB = 1;
    return 1;
}
