/* LEVEL_08:0x0AD398 -- placement copy of FRONTEND_007A58.c: seeds a chain of helper calls from the timer value. */

extern long long GetTimerSystemTime(void);
extern double func_232F00(long long value);
extern double func_233410(double a, double b);
extern double func_233778(double a, long long b);
extern double func_2334D0(double a, long long b);
extern long long func_232D18(double a);

long long func_0AD398(void)
{
    long long t;
    double x;

    t = GetTimerSystemTime();
    if (t >= 0) {
        x = func_232F00(t);
    } else {
        x = func_232F00((t & 1) | (long long)((unsigned long long)t >> 1));
        x = func_233410(x, x);
    }
    x = func_233778(x, (((long long)0x8343 << 18) | 0xA000) << 29);
    x = func_2334D0(x, (((long long)0x825D << 20) | 0x9000) << 27);
    return func_232D18(x);
}
