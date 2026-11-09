/* LEVEL_05:0x0C1C90 -- placement copy of LEVEL_01_0C36E8.c: reads a status word and runs the matching startup or fallback calls. */
extern unsigned int func_085978(long long value);
extern void func_0B45C8(int a);
extern void func_019DC0(int a, int b);
extern int func_0BB0C8(void);

void func_0C1C90(void)
{
    unsigned int v;

    v = func_085978(0x6B10);
    if (v & 8) {
        func_0B45C8(7);
        func_0B45C8(0);
        func_019DC0(4, 0);
        return;
    }
    if (v & 0x1000) {
        func_0B45C8(0);
        func_0B45C8(7);
        if (func_0BB0C8() == 0) {
            func_019DC0(4, 0);
        }
    }
}
