/* LEVEL_17:0x0911F8 -- placement copy of FRONTEND_007A58.c: seeds a chain of helper calls from the timer value. */

extern long long GetTimerSystemTime(void);
extern double func_189460(long long value);
extern double func_189970(double a, double b);
extern double func_189CD8(double a, long long b);
extern double func_189A30(double a, long long b);
extern long long func_189278(double a);

long long func_0911F8(void)
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
    x = func_189A30(x, (((long long)0x825D << 20) | 0x9000) << 27);
    return func_189278(x);
}
