/* FRONTEND:0x007A58 -- seeds a chain of helper calls from the timer value. */

extern long long GetTimerSystemTime(void);
extern double func_0232F8(long long value);
extern double func_023808(double a, double b);
extern double func_023B70(double a, long long b);
extern double func_0238C8(double a, long long b);
extern long long func_023110(double a);

long long func_007A58(void)
{
    long long t;
    double x;

    t = GetTimerSystemTime();
    if (t >= 0) {
        x = func_0232F8(t);
    } else {
        x = func_0232F8((t & 1) | (long long)((unsigned long long)t >> 1));
        x = func_023808(x, x);
    }
    x = func_023B70(x, (((long long)0x8343 << 18) | 0xA000) << 29);
    x = func_0238C8(x, (((long long)0x825D << 20) | 0x9000) << 27);
    return func_023110(x);
}
