/* LEVEL_16:0x0B2BA0 -- placement copy of LEVEL_01_0C36E8.c: reads a status word and runs the matching startup or fallback calls. */
extern unsigned int func_0795B8(long long value);
extern void func_0A50B0(int a);
extern void func_018B98(int a, int b);
extern int func_0ABFA8(void);

void func_0B2BA0(void)
{
    unsigned int v;

    v = func_0795B8(0x6B10);
    if (v & 8) {
        func_0A50B0(7);
        func_0A50B0(0);
        func_018B98(4, 0);
        return;
    }
    if (v & 0x1000) {
        func_0A50B0(0);
        func_0A50B0(7);
        if (func_0ABFA8() == 0) {
            func_018B98(4, 0);
        }
    }
}
