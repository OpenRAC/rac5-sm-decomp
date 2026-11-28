/* LEVEL_03:0x0A2780 -- placement copy of LEVEL_01_0A2A00.c: seeds a chain of helper calls from the timer value and returns the low word of the result. */
extern long long GetTimerSystemTime(void);
extern double func_202A08(long long value);
extern double func_202F18(double a, double b);
extern double func_203280(double a, long long b);
extern int func_202FD8(int);
extern long long func_202820(double a);

int sceKernelGetSystemTimeLow__Fv(void)
{
    long long t;
    double x;

    t = GetTimerSystemTime();
    if (t >= 0) {
        x = func_202A08(t);
    } else {
        x = func_202A08((t & 1) | (long long)((unsigned long long)t >> 1));
        x = func_202F18(x, x);
    }
    x = func_203280(x, (((long long)0x8343 << 18) | 0xA000) << 29);
    x = ((double (*)(double a, long long b))func_202FD8)(x, (((long long)0x825D << 20) | 0x9000) << 27);
    return (int)(func_202820(x) & (long long)(unsigned int)~0U);
}
