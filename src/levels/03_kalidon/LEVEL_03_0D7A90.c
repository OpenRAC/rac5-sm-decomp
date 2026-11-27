/* LEVEL_03:0x0D7A90 -- placement copy of LEVEL_01_0D7CA8.c: returns 1 when the helper is nonzero and the global equals value. */
extern int func_0D7708(void);
extern int D_0021EDBC;

long long func_0D7A90(int value)
{
    long long r;
    int t;

    r = 0;
    if (func_0D7708() != 0) {
        t = D_0021EDBC == value;
        r = t;
    }
    return r;
}
