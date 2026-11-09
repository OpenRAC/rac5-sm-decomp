/* LEVEL_03:0x0A2820 -- placement copy of FRONTEND_007A58.c: seeds a chain of helper calls from the timer value. */

extern long long GetTimerSystemTime(void);
extern double func_202A08(long long value);
extern double func_202F18(double a, double b);
extern double func_203280(double a, long long b);
extern double func_202FD8(double a, long long b);
extern long long func_202820(double a);

long long func_0A2820(void)
{
    long long t;
    double x;

    t = GetTimerSystemTime();
    if (t >= 0) {
        x = func_202A08(t);
    } else {
        x = func_202A08((t & 1) | (long long)((unsigned long long)t >> 1));
        x = func_202F18(x, x);
    }
    x = func_203280(x, (((long long)0x8343 << 18) | 0xA000) << 29);
    x = func_202FD8(x, (((long long)0x825D << 20) | 0x9000) << 27);
    return func_202820(x);
}
