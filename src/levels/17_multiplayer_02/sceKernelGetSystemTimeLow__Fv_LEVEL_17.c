/* LEVEL_17:0x091158 -- placement copy of LEVEL_01_0A2A00.c: seeds a chain of helper calls from the timer value and returns the low word of the result. */
extern long long GetTimerSystemTime(void);
extern double func_189460(long long value);
extern double func_189970(double a, double b);
extern double func_189CD8(double a, long long b);
extern int func_189A30(int);
extern long long func_189278(double a);

int sceKernelGetSystemTimeLow__Fv(void)
{
    long long t;
    double x;

    t = GetTimerSystemTime();
    if (t >= 0) {
        x = func_189460(t);
    } else {
        x = func_189460((t & 1) | (long long)((unsigned long long)t >> 1));
        x = func_189970(x, x);
    }
    x = func_189CD8(x, (((long long)0x8343 << 18) | 0xA000) << 29);
    x = ((double (*)(double a, long long b))func_189A30)(x, (((long long)0x825D << 20) | 0x9000) << 27);
    return (int)(func_189278(x) & (long long)(unsigned int)~0U);
}
