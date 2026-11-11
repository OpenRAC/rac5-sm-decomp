/* LEVEL_04:0x0A7CB0 -- placement copy of FRONTEND_007A58.c: seeds a chain of helper calls from the timer value. */

extern long long GetTimerSystemTime(void);
extern double func_203538(long long value);
extern double func_203A48(double a, double b);
extern double func_203DB0(double a, long long b);
extern double func_203B08(double a, long long b);
extern long long func_203350(double a);

long long func_0A7CB0(void)
{
    long long t;
    double x;

    t = GetTimerSystemTime();
    if (t >= 0) {
        x = func_203538(t);
    } else {
        x = func_203538((t & 1) | (long long)((unsigned long long)t >> 1));
        x = func_203A48(x, x);
    }
    x = func_203DB0(x, (((long long)0x8343 << 18) | 0xA000) << 29);
    x = func_203B08(x, (((long long)0x825D << 20) | 0x9000) << 27);
    return func_203350(x);
}
