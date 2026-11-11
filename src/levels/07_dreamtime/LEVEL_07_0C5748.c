/* LEVEL_07:0x0C5748 -- placement copy of LEVEL_01_0C36E8.c: reads a status word and runs the matching startup or fallback calls. */
extern unsigned int func_08A0F0(int value);
extern int func_0B8080(int a);
extern void func_01AEE8(int a, int b);
extern int func_0BEB80(void);

void func_0C5748(void)
{
    unsigned int v;

    v = func_08A0F0(0x6B10);
    if (v & 8) {
        func_0B8080(7);
        func_0B8080(0);
        func_01AEE8(4, 0);
        return;
    }
    if (v & 0x1000) {
        func_0B8080(0);
        func_0B8080(7);
        if (func_0BEB80() == 0) {
            func_01AEE8(4, 0);
        }
    }
}
