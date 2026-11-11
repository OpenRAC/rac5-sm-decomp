/* LEVEL_20:0x07C3F8 -- placement copy of FRONTEND_007A58.c: seeds a chain of helper calls from the timer value. */

extern long long GetTimerSystemTime(void);
extern double func_0F8548(long long value);
extern double func_0F8A58(double a, double b);
extern double func_0F8DC0(double a, long long b);
extern double func_0F8B18(double a, long long b);
extern long long func_0F8360(double a);

long long func_07C3F8(void)
{
    long long t;
    double x;

    t = GetTimerSystemTime();
    if (t >= 0) {
        x = func_0F8548(t);
    } else {
        x = func_0F8548((t & 1) | (long long)((unsigned long long)t >> 1));
        x = func_0F8A58(x, x);
    }
    x = func_0F8DC0(x, (((long long)0x8343 << 18) | 0xA000) << 29);
    x = func_0F8B18(x, (((long long)0x825D << 20) | 0x9000) << 27);
    return func_0F8360(x);
}
