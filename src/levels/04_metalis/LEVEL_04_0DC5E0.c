/* LEVEL_04:0x0DC5E0 -- placement copy of FRONTEND_013EC0.c: clears several status words and, when a handle is set and the argument is zero, calls a helper with a fixed code before clearing the handle slot. */

extern int D_0021FB24;
extern int D_0021FB34;
extern int D_0021FB14;
extern unsigned char D_0021FB3C;
extern int D_0021FB30;

extern int func_0BB828(int index);

void func_0DC5E0(int a0)
{
    int v;

    v = D_0021FB24;
    D_0021FB34 = 0;
    D_0021FB14 = 0;
    D_0021FB3C = 0;
    if (v != 0 && a0 == 0) {
        func_0BB828(7);
    }
    D_0021FB24 = 0;
    D_0021FB30 = 0;
}
