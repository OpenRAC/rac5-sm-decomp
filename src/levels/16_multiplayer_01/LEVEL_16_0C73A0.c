/* LEVEL_16:0x0C73A0 -- placement copy of LEVEL_01_0D7CA8.c: returns 1 when the helper is nonzero and the global equals value. */
extern int func_0C7018(void);
extern int D_001B45EC;

long long func_0C73A0(int value)
{
    long long r;
    int t;

    r = 0;
    if (func_0C7018() != 0) {
        t = D_001B45EC == value;
        r = t;
    }
    return r;
}
