/* LEVEL_22:0x0C5270 -- placement copy of FRONTEND_013EC0.c: clears several status words and, when a handle is set and the argument is zero, calls a helper with a fixed code before clearing the handle slot. */

extern int D_001659E4;
extern int D_001659F4;
extern int D_001659D4;
extern unsigned char D_001659FC;
extern int D_001659F0;

extern int func_0A4570(int index);

void func_0C5270(int a0)
{
    int v;

    v = D_001659E4;
    D_001659F4 = 0;
    D_001659D4 = 0;
    D_001659FC = 0;
    if (v != 0 && a0 == 0) {
        func_0A4570(7);
    }
    D_001659E4 = 0;
    D_001659F0 = 0;
}
