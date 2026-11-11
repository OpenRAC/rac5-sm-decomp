/* LEVEL_20:0x09D0D0 -- placement copy of LEVEL_01_0C36E8.c: reads a status word and runs the matching startup or fallback calls. */
extern unsigned int func_067228(int value);
extern int func_08F6B0(int a);
extern void func_016950(int a, int b);
extern int func_0964D8(void);

void func_09D0D0(void)
{
    unsigned int v;

    v = func_067228(0x6B10);
    if (v & 8) {
        func_08F6B0(7);
        func_08F6B0(0);
        func_016950(4, 0);
        return;
    }
    if (v & 0x1000) {
        func_08F6B0(0);
        func_08F6B0(7);
        if (func_0964D8() == 0) {
            func_016950(4, 0);
        }
    }
}
