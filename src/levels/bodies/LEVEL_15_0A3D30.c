/* LEVEL_15:0x0A3D30 -- placement copy of LEVEL_01_0C36E8.c: reads a status word and runs the matching startup or fallback calls. */
extern unsigned int func_06C700(int value);
extern void func_096530(int a);
extern void func_016A10(int a, int b);
extern int func_09D168(void);

void func_0A3D30(void)
{
    unsigned int v;

    v = func_06C700(0x6B10);
    if (v & 8) {
        func_096530(7);
        func_096530(0);
        func_016A10(4, 0);
        return;
    }
    if (v & 0x1000) {
        func_096530(0);
        func_096530(7);
        if (func_09D168() == 0) {
            func_016A10(4, 0);
        }
    }
}
