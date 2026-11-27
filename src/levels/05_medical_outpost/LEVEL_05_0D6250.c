/* LEVEL_05:0x0D6250 -- placement copy of LEVEL_01_0D7CA8.c: returns 1 when the helper is nonzero and the global equals value. */
extern int func_0D5EC8(void);
extern int D_001F5ABC;

long long func_0D6250(int value)
{
    long long r;
    int t;

    r = 0;
    if (func_0D5EC8() != 0) {
        t = D_001F5ABC == value;
        r = t;
    }
    return r;
}
