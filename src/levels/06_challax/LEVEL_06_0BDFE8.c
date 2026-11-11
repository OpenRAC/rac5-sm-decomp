/* LEVEL_06:0x0BDFE8 -- placement copy of LEVEL_01_0C36E8.c: reads a status word and runs the matching startup or fallback calls. */
extern unsigned int func_080E98(int value);
extern int func_0B0848(int a);
extern void func_019028(int a, int b);
extern int func_0B7420(void);

void func_0BDFE8(void)
{
    unsigned int v;

    v = func_080E98(0x6B10);
    if (v & 8) {
        func_0B0848(7);
        func_0B0848(0);
        func_019028(4, 0);
        return;
    }
    if (v & 0x1000) {
        func_0B0848(0);
        func_0B0848(7);
        if (func_0B7420() == 0) {
            func_019028(4, 0);
        }
    }
}
