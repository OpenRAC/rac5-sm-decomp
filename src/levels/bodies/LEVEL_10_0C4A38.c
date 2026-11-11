/* LEVEL_10:0x0C4A38 -- placement copy of LEVEL_01_0C36E8.c: reads a status word and runs the matching startup or fallback calls. */
extern unsigned int func_088388(int value);
extern void func_0B71F8(int a);
extern void func_019EA8(int a, int b);
extern int func_0BDE70(void);

void func_0C4A38(void)
{
    unsigned int v;

    v = func_088388(0x6B10);
    if (v & 8) {
        func_0B71F8(7);
        func_0B71F8(0);
        func_019EA8(4, 0);
        return;
    }
    if (v & 0x1000) {
        func_0B71F8(0);
        func_0B71F8(7);
        if (func_0BDE70() == 0) {
            func_019EA8(4, 0);
        }
    }
}
