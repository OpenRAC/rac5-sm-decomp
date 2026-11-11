/* LEVEL_20:0x0B0958 -- placement copy of FRONTEND_013EC0.c: clears several status words and, when a handle is set and the argument is zero, calls a helper with a fixed code before clearing the handle slot. */

extern int D_00116BF4;
extern int D_00116C04;
extern int D_00116BE4;
extern unsigned char D_00116C0C;
extern int D_00116C00;

extern int func_08F6B0(int a);

void func_0B0958(int a0)
{
    int v;

    v = D_00116BF4;
    D_00116C04 = 0;
    D_00116BE4 = 0;
    D_00116C0C = 0;
    if (v != 0 && a0 == 0) {
        func_08F6B0(7);
    }
    D_00116BF4 = 0;
    D_00116C00 = 0;
}
