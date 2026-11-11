/* LEVEL_06:0x09D270 -- placement copy of FRONTEND_007A58.c: seeds a chain of helper calls from the timer value. */

extern long long GetTimerSystemTime(void);
extern double func_1D92C0(long long value);
extern double func_1D97D0(double a, double b);
extern double func_1D9B38(double a, long long b);
extern double func_1D9890(double a, long long b);
extern long long func_1D90D8(double a);

long long func_09D270(void)
{
    long long t;
    double x;

    t = GetTimerSystemTime();
    if (t >= 0) {
        x = func_1D92C0(t);
    } else {
        x = func_1D92C0((t & 1) | (long long)((unsigned long long)t >> 1));
        x = func_1D97D0(x, x);
    }
    x = func_1D9B38(x, (((long long)0x8343 << 18) | 0xA000) << 29);
    x = func_1D9890(x, (((long long)0x825D << 20) | 0x9000) << 27);
    return func_1D90D8(x);
}
