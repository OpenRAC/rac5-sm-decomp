/* LEVEL_06:0x0D1630 -- placement copy of FRONTEND_013EC0.c: clears several status words and, when a handle is set and the argument is zero, calls a helper with a fixed code before clearing the handle slot. */

extern int D_001F5564;
extern int D_001F5574;
extern int D_001F5554;
extern unsigned char D_001F557C;
extern int D_001F5570;

extern int func_0B0848(int a);

void func_0D1630(int a0)
{
    int v;

    v = D_001F5564;
    D_001F5574 = 0;
    D_001F5554 = 0;
    D_001F557C = 0;
    if (v != 0 && a0 == 0) {
        func_0B0848(7);
    }
    D_001F5564 = 0;
    D_001F5570 = 0;
}
