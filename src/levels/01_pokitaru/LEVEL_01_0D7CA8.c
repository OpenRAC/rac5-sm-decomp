/* LEVEL_01:0x0D7CA8 -- returns 1 when the helper is nonzero and the global equals value. */
extern int func_0D7920(void);
extern int D_0020673C;

long long func_0D7CA8(int value)
{
    long long r;
    int t;

    r = 0;
    if (func_0D7920() != 0) {
        t = D_0020673C == value;
        r = t;
    }
    return r;
}
