/* LEVEL_09:0x0C0998 -- placement copy of LEVEL_01_0C36E8.c: reads a status word and runs the matching startup or fallback calls. */
extern unsigned int func_0849D8(int value);
extern void func_0B32D0(int a);
extern void func_019C18(int a, int b);
extern int func_0B9DD0(void);

void func_0C0998(void)
{
    unsigned int v;

    v = func_0849D8(0x6B10);
    if (v & 8) {
        func_0B32D0(7);
        func_0B32D0(0);
        func_019C18(4, 0);
        return;
    }
    if (v & 0x1000) {
        func_0B32D0(0);
        func_0B32D0(7);
        if (func_0B9DD0() == 0) {
            func_019C18(4, 0);
        }
    }
}
