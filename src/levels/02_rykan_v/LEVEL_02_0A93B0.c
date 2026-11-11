/* LEVEL_02:0x0A93B0 -- placement copy of FRONTEND_007A58.c: seeds a chain of helper calls from the timer value. */

extern long long GetTimerSystemTime(void);
extern double func_1FF010(long long value);
extern double func_1FF520(double a, double b);
extern double func_1FF888(double a, long long b);
extern double func_1FF5E0(double a, long long b);
extern long long func_1FEE28(double a);

long long func_0A93B0(void)
{
    long long t;
    double x;

    t = GetTimerSystemTime();
    if (t >= 0) {
        x = func_1FF010(t);
    } else {
        x = func_1FF010((t & 1) | (long long)((unsigned long long)t >> 1));
        x = func_1FF520(x, x);
    }
    x = func_1FF888(x, (((long long)0x8343 << 18) | 0xA000) << 29);
    x = func_1FF5E0(x, (((long long)0x825D << 20) | 0x9000) << 27);
    return func_1FEE28(x);
}
