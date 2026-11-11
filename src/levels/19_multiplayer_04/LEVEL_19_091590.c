/* LEVEL_19:0x091590 -- placement copy of FRONTEND_007A58.c: seeds a chain of helper calls from the timer value. */

extern long long GetTimerSystemTime(void);
extern double func_196FE0(long long value);
extern double func_1974F0(double a, double b);
extern double func_197858(double a, long long b);
extern double func_1975B0(double a, long long b);
extern long long func_196DF8(double a);

long long func_091590(void)
{
    long long t;
    double x;

    t = GetTimerSystemTime();
    if (t >= 0) {
        x = func_196FE0(t);
    } else {
        x = func_196FE0((t & 1) | (long long)((unsigned long long)t >> 1));
        x = func_1974F0(x, x);
    }
    x = func_197858(x, (((long long)0x8343 << 18) | 0xA000) << 29);
    x = func_1975B0(x, (((long long)0x825D << 20) | 0x9000) << 27);
    return func_196DF8(x);
}
