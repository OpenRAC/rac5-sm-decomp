/* LEVEL_17:0x0C68E0 -- placement copy of LEVEL_01_0D7CA8.c: returns 1 when the helper is nonzero and the global equals value. */
extern int func_0C6558(void);
extern int D_001A7BEC;

long long func_0C68E0(int value)
{
    long long r;
    int t;

    r = 0;
    if (func_0C6558() != 0) {
        t = D_001A7BEC == value;
        r = t;
    }
    return r;
}
