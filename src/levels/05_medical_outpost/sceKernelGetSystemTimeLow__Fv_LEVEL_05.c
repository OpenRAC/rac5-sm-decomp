/* LEVEL_05:0x0A0FC0 -- placement copy of LEVEL_01_0A2A00.c: seeds a chain of helper calls from the timer value and returns the low word of the result. */
extern long long GetTimerSystemTime(void);
extern double func_1D9770(long long value);
extern double func_1D9C80(double a, double b);
extern double func_1D9FE8(double a, long long b);
extern int func_1D9D40(int);
extern long long func_1D9588(double a);

int sceKernelGetSystemTimeLow__Fv(void)
{
    long long t;
    double x;

    t = GetTimerSystemTime();
    if (t >= 0) {
        x = func_1D9770(t);
    } else {
        x = func_1D9770((t & 1) | (long long)((unsigned long long)t >> 1));
        x = func_1D9C80(x, x);
    }
    x = func_1D9FE8(x, (((long long)0x8343 << 18) | 0xA000) << 29);
    x = ((double (*)(double a, long long b))func_1D9D40)(x, (((long long)0x825D << 20) | 0x9000) << 27);
    return (int)(func_1D9588(x) & (long long)(unsigned int)~0U);
}
