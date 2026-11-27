/* LEVEL_15:0x0832F8 -- placement copy of LEVEL_01_0A2A00.c: seeds a chain of helper calls from the timer value and returns the low word of the result. */
extern long long GetTimerSystemTime(void);
extern double func_13F070(long long value);
extern double func_13F580(double a, double b);
extern double func_13F8E8(double a, long long b);
extern int func_13F640(int);
extern long long func_13EE88(double a);

int sceKernelGetSystemTimeLow__Fv(void)
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
    x = ((double (*)(double a, long long b))func_13F640)(x, (((long long)0x825D << 20) | 0x9000) << 27);
    return (int)(func_13EE88(x) & (long long)(unsigned int)~0U);
}
