/* LEVEL_20:0x0B18D0 -- placement copy of LEVEL_01_0D7CA8.c: returns 1 when the helper is nonzero and the global equals value. */
extern int func_0B1548(void);
extern int D_00116CCC;

long long func_0B18D0(int value)
{
    long long r;
    int t;

    r = 0;
    if (func_0B1548() != 0) {
        t = D_00116CCC == value;
        r = t;
    }
    return r;
}
