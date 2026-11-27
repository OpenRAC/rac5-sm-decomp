/* LEVEL_04:0x0DD568 -- placement copy of LEVEL_01_0D7CA8.c: returns 1 when the helper is nonzero and the global equals value. */
extern int func_0DD1E0(void);
extern int D_0021FBFC;

long long func_0DD568(int value)
{
    long long r;
    int t;

    r = 0;
    if (func_0DD1E0() != 0) {
        t = D_0021FBFC == value;
        r = t;
    }
    return r;
}
