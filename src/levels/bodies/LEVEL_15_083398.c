/* LEVEL_15:0x083398 -- placement copy of FRONTEND_007A58.c: seeds a chain of helper calls from the timer value. */

extern long long GetTimerSystemTime(void);
extern double func_13F070(long long value);
extern double func_13F580(double a, double b);
extern double func_13F8E8(double a, long long b);
extern double func_13F640(double a, long long b);
extern long long func_13EE88(double a);

long long func_083398(void)
{
    long long t;
    double x;

    t = GetTimerSystemTime();
    if (t >= 0) {
        x = func_13F070(t);
    } else {
        x = func_13F070((t & 1) | (long long)((unsigned long long)t >> 1));
        x = func_13F580(x, x);
    }
    x = func_13F8E8(x, (((long long)0x8343 << 18) | 0xA000) << 29);
    x = func_13F640(x, (((long long)0x825D << 20) | 0x9000) << 27);
    return func_13EE88(x);
}
