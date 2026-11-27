/* LEVEL_20:0x07C358 -- placement copy of LEVEL_01_0A2A00.c: seeds a chain of helper calls from the timer value and returns the low word of the result. */
extern long long GetTimerSystemTime(void);
extern double func_0F8548(long long value);
extern double func_0F8A58(double a, double b);
extern double func_0F8DC0(double a, long long b);
extern int func_0F8B18(int);
extern long long func_0F8360(double a);

int sceKernelGetSystemTimeLow__Fv(void)
{
    long long t;
    double x;

    t = GetTimerSystemTime();
    if (t >= 0) {
        x = func_0F8548(t);
    } else {
        x = func_0F8548((t & 1) | (long long)((unsigned long long)t >> 1));
        x = func_0F8A58(x, x);
    }
    x = func_0F8DC0(x, (((long long)0x8343 << 18) | 0xA000) << 29);
    x = ((double (*)(double a, long long b))func_0F8B18)(x, (((long long)0x825D << 20) | 0x9000) << 27);
    return (int)(func_0F8360(x) & (long long)(unsigned int)~0U);
}
