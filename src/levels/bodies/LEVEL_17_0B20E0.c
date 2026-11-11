/* LEVEL_17:0x0B20E0 -- placement copy of LEVEL_01_0C36E8.c: reads a status word and runs the matching startup or fallback calls. */
extern unsigned int func_07A030(int value);
extern void func_0A4590(int a);
extern void func_018518(int a, int b);
extern int func_0AB4E8(void);

void func_0B20E0(void)
{
    unsigned int v;

    v = func_07A030(0x6B10);
    if (v & 8) {
        func_0A4590(7);
        func_0A4590(0);
        func_018518(4, 0);
        return;
    }
    if (v & 0x1000) {
        func_0A4590(0);
        func_0A4590(7);
        if (func_0AB4E8() == 0) {
            func_018518(4, 0);
        }
    }
}
