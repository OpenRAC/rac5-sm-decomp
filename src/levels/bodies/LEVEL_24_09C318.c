/* LEVEL_24:0x09C318 -- placement copy of FRONTEND_007A58.c: seeds a chain of helper calls from the timer value. */

extern long long GetTimerSystemTime(void);
extern double func_1BB050(long long value);
extern double func_1BB560(double a, double b);
extern double func_1BB8C8(double a, long long b);
extern double func_1BB620(double a, long long b);
extern long long func_1BAE68(double a);

long long func_09C318(void)
{
    long long t;
    double x;

    t = GetTimerSystemTime();
    if (t >= 0) {
        x = func_1BB050(t);
    } else {
        x = func_1BB050((t & 1) | (long long)((unsigned long long)t >> 1));
        x = func_1BB560(x, x);
    }
    x = func_1BB8C8(x, (((long long)0x8343 << 18) | 0xA000) << 29);
    x = func_1BB620(x, (((long long)0x825D << 20) | 0x9000) << 27);
    return func_1BAE68(x);
}
