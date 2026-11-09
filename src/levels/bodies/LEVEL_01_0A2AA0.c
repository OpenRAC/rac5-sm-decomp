/* LEVEL_01:0x0A2AA0 -- placement copy of FRONTEND_007A58.c: seeds a chain of helper calls from the timer value. */

extern long long GetTimerSystemTime(void);
extern double func_1EA378(long long value);
extern double func_1EA888(double a, double b);
extern double func_1EABF0(double a, long long b);
extern double func_1EA948(double a, long long b);
extern long long func_1EA190(double a);

long long func_0A2AA0(void)
{
    long long t;
    double x;

    t = GetTimerSystemTime();
    if (t >= 0) {
        x = func_1EA378(t);
    } else {
        x = func_1EA378((t & 1) | (long long)((unsigned long long)t >> 1));
        x = func_1EA888(x, x);
    }
    x = func_1EABF0(x, (((long long)0x8343 << 18) | 0xA000) << 29);
    x = func_1EA948(x, (((long long)0x825D << 20) | 0x9000) << 27);
    return func_1EA190(x);
}
