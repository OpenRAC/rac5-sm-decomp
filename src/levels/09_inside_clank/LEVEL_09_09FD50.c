/* LEVEL_09:0x09FD50 -- placement copy of FRONTEND_007A58.c: seeds a chain of helper calls from the timer value. */

extern long long GetTimerSystemTime(void);
extern double func_1D41E0(long long value);
extern double func_1D46F0(double a, double b);
extern double func_1D4A58(double a, long long b);
extern double func_1D47B0(double a, long long b);
extern long long func_1D3FF8(double a);

long long func_09FD50(void)
{
    long long t;
    double x;

    t = GetTimerSystemTime();
    if (t >= 0) {
        x = func_1D41E0(t);
    } else {
        x = func_1D41E0((t & 1) | (long long)((unsigned long long)t >> 1));
        x = func_1D46F0(x, x);
    }
    x = func_1D4A58(x, (((long long)0x8343 << 18) | 0xA000) << 29);
    x = func_1D47B0(x, (((long long)0x825D << 20) | 0x9000) << 27);
    return func_1D3FF8(x);
}
