/* LEVEL_16:0x091D00 -- placement copy of FRONTEND_007A58.c: seeds a chain of helper calls from the timer value. */

extern long long GetTimerSystemTime(void);
extern double func_195E18(long long value);
extern double func_196328(double a, double b);
extern double func_196690(double a, long long b);
extern double func_1963E8(double a, long long b);
extern long long func_195C30(double a);

long long func_091D00(void)
{
    long long t;
    double x;

    t = GetTimerSystemTime();
    if (t >= 0) {
        x = func_195E18(t);
    } else {
        x = func_195E18((t & 1) | (long long)((unsigned long long)t >> 1));
        x = func_196328(x, x);
    }
    x = func_196690(x, (((long long)0x8343 << 18) | 0xA000) << 29);
    x = func_1963E8(x, (((long long)0x825D << 20) | 0x9000) << 27);
    return func_195C30(x);
}
