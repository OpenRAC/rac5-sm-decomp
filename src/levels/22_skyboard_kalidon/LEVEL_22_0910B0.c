/* LEVEL_22:0x0910B0 -- placement copy of FRONTEND_007A58.c: seeds a chain of helper calls from the timer value. */

extern long long GetTimerSystemTime(void);
extern double func_149730(long long value);
extern double func_149C40(double a, double b);
extern double func_149FA8(double a, long long b);
extern double func_149D00(double a, long long b);
extern long long func_149548(double a);

long long func_0910B0(void)
{
    long long t;
    double x;

    t = GetTimerSystemTime();
    if (t >= 0) {
        x = func_149730(t);
    } else {
        x = func_149730((t & 1) | (long long)((unsigned long long)t >> 1));
        x = func_149C40(x, x);
    }
    x = func_149FA8(x, (((long long)0x8343 << 18) | 0xA000) << 29);
    x = func_149D00(x, (((long long)0x825D << 20) | 0x9000) << 27);
    return func_149548(x);
}
