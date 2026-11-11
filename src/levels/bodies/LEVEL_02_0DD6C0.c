/* LEVEL_02:0x0DD6C0 -- placement copy of FRONTEND_013EC0.c: clears several status words and, when a handle is set and the argument is zero, calls a helper with a fixed code before clearing the handle slot. */

extern int D_0021B624;
extern int D_0021B634;
extern int D_0021B614;
extern unsigned char D_0021B63C;
extern int D_0021B630;

extern int func_0BC930(int index);

void func_0DD6C0(int a0)
{
    int v;

    v = D_0021B624;
    D_0021B634 = 0;
    D_0021B614 = 0;
    D_0021B63C = 0;
    if (v != 0 && a0 == 0) {
        func_0BC930(7);
    }
    D_0021B624 = 0;
    D_0021B630 = 0;
}
