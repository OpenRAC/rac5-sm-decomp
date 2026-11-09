/* LEVEL_23:0x0BA488 -- placement copy of LEVEL_01_0C36E8.c: reads a status word and runs the matching startup or fallback calls. */
extern unsigned int func_07DEE0(long long value);
extern void func_0ACDE8(int a);
extern void func_019338(int a, int b);
extern int func_0B38C0(void);

void func_0BA488(void)
{
    unsigned int v;

    v = func_07DEE0(0x6B10);
    if (v & 8) {
        func_0ACDE8(7);
        func_0ACDE8(0);
        func_019338(4, 0);
        return;
    }
    if (v & 0x1000) {
        func_0ACDE8(0);
        func_0ACDE8(7);
        if (func_0B38C0() == 0) {
            func_019338(4, 0);
        }
    }
}
