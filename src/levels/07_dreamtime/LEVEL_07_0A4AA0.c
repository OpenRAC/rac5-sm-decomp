/* LEVEL_07:0x0A4AA0 -- placement copy of FRONTEND_007A58.c: seeds a chain of helper calls from the timer value. */

extern long long GetTimerSystemTime(void);
extern double func_1FE6F0(long long value);
extern double func_1FEC00(double a, double b);
extern double func_1FEF68(double a, long long b);
extern double func_1FECC0(double a, long long b);
extern long long func_1FE508(double a);

long long func_0A4AA0(void)
{
    long long t;
    double x;

    t = GetTimerSystemTime();
    if (t >= 0) {
        x = func_1FE6F0(t);
    } else {
        x = func_1FE6F0((t & 1) | (long long)((unsigned long long)t >> 1));
        x = func_1FEC00(x, x);
    }
    x = func_1FEF68(x, (((long long)0x8343 << 18) | 0xA000) << 29);
    x = func_1FECC0(x, (((long long)0x825D << 20) | 0x9000) << 27);
    return func_1FE508(x);
}
