/* LEVEL_22:0x0B1B98 -- placement copy of LEVEL_01_0C36E8.c: reads a status word and runs the matching startup or fallback calls. */
extern unsigned int func_079438(int value);
extern int func_0A4570(int index);
extern void func_016E40(int a, int b);
extern int func_0AAFD0(void);

void func_0B1B98(void)
{
    unsigned int v;

    v = func_079438(0x6B10);
    if (v & 8) {
        func_0A4570(7);
        func_0A4570(0);
        func_016E40(4, 0);
        return;
    }
    if (v & 0x1000) {
        func_0A4570(0);
        func_0A4570(7);
        if (func_0AAFD0() == 0) {
            func_016E40(4, 0);
        }
    }
}
