/* LEVEL_18:0x0C6378 -- placement copy of LEVEL_01_0D7CA8.c: returns 1 when the helper is nonzero and the global equals value. */
extern int func_0C5FF0(void);
extern int D_001B5A6C;

long long func_0C6378(int value)
{
    long long r;
    int t;

    r = 0;
    if (func_0C5FF0() != 0) {
        t = D_001B5A6C == value;
        r = t;
    }
    return r;
}
