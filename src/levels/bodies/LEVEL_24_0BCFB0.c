/* LEVEL_24:0x0BCFB0 -- placement copy of LEVEL_01_0C36E8.c: reads a status word and runs the matching startup or fallback calls. */
extern unsigned int func_0812C0(int value);
extern void func_0AF8B0(int a);
extern void func_018E18(int a, int b);
extern int func_0B63E8(void);

void func_0BCFB0(void)
{
    unsigned int v;

    v = func_0812C0(0x6B10);
    if (v & 8) {
        func_0AF8B0(7);
        func_0AF8B0(0);
        func_018E18(4, 0);
        return;
    }
    if (v & 0x1000) {
        func_0AF8B0(0);
        func_0AF8B0(7);
        if (func_0B63E8() == 0) {
            func_018E18(4, 0);
        }
    }
}
