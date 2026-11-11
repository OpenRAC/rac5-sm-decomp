/* LEVEL_18:0x090D10 -- placement copy of FRONTEND_007A58.c: seeds a chain of helper calls from the timer value. */

extern long long GetTimerSystemTime(void);
extern double func_1972B8(long long value);
extern double func_1977C8(double a, double b);
extern double func_197B30(double a, long long b);
extern double func_197888(double a, long long b);
extern long long func_1970D0(double a);

long long func_090D10(void)
{
    long long t;
    double x;

    t = GetTimerSystemTime();
    if (t >= 0) {
        x = func_1972B8(t);
    } else {
        x = func_1972B8((t & 1) | (long long)((unsigned long long)t >> 1));
        x = func_1977C8(x, x);
    }
    x = func_197B30(x, (((long long)0x8343 << 18) | 0xA000) << 29);
    x = func_197888(x, (((long long)0x825D << 20) | 0x9000) << 27);
    return func_1970D0(x);
}
