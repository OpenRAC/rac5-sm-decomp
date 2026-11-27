/* LEVEL_16:0x091C60 -- placement copy of LEVEL_01_0A2A00.c: seeds a chain of helper calls from the timer value and returns the low word of the result. */
extern long long GetTimerSystemTime(void);
extern double func_195E18(long long value);
extern double func_196328(double a, double b);
extern double func_196690(double a, long long b);
extern int func_1963E8(int);
extern long long func_195C30(double a);

int sceKernelGetSystemTimeLow__Fv(void)
{
    long long t;
    double x;

    t = GetTimerSystemTime();
    if (t >= 0) {
        x = func_195E18(t);
    } else {
        x = func_195E18((t & 1) | (long long)((unsigned long long)t >> 1));
        x = func_196328(x, x);
    }
    x = func_196690(x, (((long long)0x8343 << 18) | 0xA000) << 29);
    x = ((double (*)(double a, long long b))func_1963E8)(x, (((long long)0x825D << 20) | 0x9000) << 27);
    return (int)(func_195C30(x) & (long long)(unsigned int)~0U);
}
