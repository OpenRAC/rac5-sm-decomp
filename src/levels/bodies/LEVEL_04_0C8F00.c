/* LEVEL_04:0x0C8F00 -- placement copy of LEVEL_01_0C36E8.c: reads a status word and runs the matching startup or fallback calls. */
extern unsigned int func_08B2B8(int value);
extern int func_0BB828(int index);
extern void func_01A4A8(int a, int b);
extern int func_0C2338(void);

void func_0C8F00(void)
{
    unsigned int v;

    v = func_08B2B8(0x6B10);
    if (v & 8) {
        func_0BB828(7);
        func_0BB828(0);
        func_01A4A8(4, 0);
        return;
    }
    if (v & 0x1000) {
        func_0BB828(0);
        func_0BB828(7);
        if (func_0C2338() == 0) {
            func_01A4A8(4, 0);
        }
    }
}
