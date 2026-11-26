/* LEVEL_19:0x0C6C78 -- placement copy of LEVEL_01_0D7CA8.c: returns 1 when the helper is nonzero and the global equals value. */
extern int func_0C68F0(void);
extern int D_001B576C;

long long func_0C6C78(int value)
{
    long long r;
    int t;

    r = 0;
    if (func_0C68F0() != 0) {
        t = D_001B576C == value;
        r = t;
    }
    return r;
}
