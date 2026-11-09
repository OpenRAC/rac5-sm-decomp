/* LEVEL_10:0x0D8170 -- placement copy of FRONTEND_013EC0.c: clears several status words and, when a handle is set and the argument is zero, calls a helper with a fixed code before clearing the handle slot. */

extern int D_0020F664;
extern int D_0020F674;
extern int D_0020F654;
extern unsigned char D_0020F67C;
extern int D_0020F670;

void func_0B71F8(int a0);

void func_0D8170(int a0)
{
    int v;

    v = D_0020F664;
    D_0020F674 = 0;
    D_0020F654 = 0;
    D_0020F67C = 0;
    if (v != 0 && a0 == 0) {
        func_0B71F8(7);
    }
    D_0020F664 = 0;
    D_0020F670 = 0;
}
