/* LEVEL_01:0x0A2A00 -- seeds a chain of helper calls from the timer value and returns the low word of the result. */
extern long long GetTimerSystemTime(void);
extern double func_1EA378(long long value);
extern double func_1EA888(double a, double b);
extern double func_1EABF0(double a, long long b);
extern int func_1EA948(int);
extern long long func_1EA190(double a);

int sceKernelGetSystemTimeLow__Fv(void)
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
    x = ((double (*)(double a, long long b))func_1EA948)(x, (((long long)0x825D << 20) | 0x9000) << 27);
    return (int)(func_1EA190(x) & (long long)(unsigned int)~0U);
}
