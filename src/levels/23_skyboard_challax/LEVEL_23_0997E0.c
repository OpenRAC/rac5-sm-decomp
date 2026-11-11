/* LEVEL_23:0x0997E0 -- placement copy of FRONTEND_007A58.c: seeds a chain of helper calls from the timer value. */

extern long long GetTimerSystemTime(void);
extern double func_1BD7B8(long long value);
extern double func_1BDCC8(double a, double b);
extern double func_1BE030(double a, long long b);
extern double func_1BDD88(double a, long long b);
extern long long func_1BD5D0(double a);

long long func_0997E0(void)
{
    long long t;
    double x;

    t = GetTimerSystemTime();
    if (t >= 0) {
        x = func_1BD7B8(t);
    } else {
        x = func_1BD7B8((t & 1) | (long long)((unsigned long long)t >> 1));
        x = func_1BDCC8(x, x);
    }
    x = func_1BE030(x, (((long long)0x8343 << 18) | 0xA000) << 29);
    x = func_1BDD88(x, (((long long)0x825D << 20) | 0x9000) << 27);
    return func_1BD5D0(x);
}
