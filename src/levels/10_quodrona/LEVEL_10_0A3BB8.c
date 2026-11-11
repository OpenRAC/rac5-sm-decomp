/* LEVEL_10:0x0A3BB8 -- placement copy of FRONTEND_007A58.c: seeds a chain of helper calls from the timer value. */

extern long long GetTimerSystemTime(void);
extern double func_1F33D0(long long value);
extern double func_1F38E0(double a, double b);
extern double func_1F3C48(double a, long long b);
extern double func_1F39A0(double a, long long b);
extern long long func_1F31E8(double a);

long long func_0A3BB8(void)
{
    long long t;
    double x;

    t = GetTimerSystemTime();
    if (t >= 0) {
        x = func_1F33D0(t);
    } else {
        x = func_1F33D0((t & 1) | (long long)((unsigned long long)t >> 1));
        x = func_1F38E0(x, x);
    }
    x = func_1F3C48(x, (((long long)0x8343 << 18) | 0xA000) << 29);
    x = func_1F39A0(x, (((long long)0x825D << 20) | 0x9000) << 27);
    return func_1F31E8(x);
}
