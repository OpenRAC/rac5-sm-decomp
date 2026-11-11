/* LEVEL_05:0x0A1060 -- placement copy of FRONTEND_007A58.c: seeds a chain of helper calls from the timer value. */

extern long long GetTimerSystemTime(void);
extern double func_1D9770(long long value);
extern double func_1D9C80(double a, double b);
extern double func_1D9FE8(double a, long long b);
extern double func_1D9D40(double a, long long b);
extern long long func_1D9588(double a);

long long func_0A1060(void)
{
    long long t;
    double x;

    t = GetTimerSystemTime();
    if (t >= 0) {
        x = func_1D9770(t);
    } else {
        x = func_1D9770((t & 1) | (long long)((unsigned long long)t >> 1));
        x = func_1D9C80(x, x);
    }
    x = func_1D9FE8(x, (((long long)0x8343 << 18) | 0xA000) << 29);
    x = func_1D9D40(x, (((long long)0x825D << 20) | 0x9000) << 27);
    return func_1D9588(x);
}
