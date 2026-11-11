/* LEVEL_16:0x0C6428 -- placement copy of FRONTEND_013EC0.c: clears several status words and, when a handle is set and the argument is zero, calls a helper with a fixed code before clearing the handle slot. */

extern int D_001B4514;
extern int D_001B4524;
extern int D_001B4504;
extern unsigned char D_001B452C;
extern int D_001B4520;

extern int func_0A50B0(int index);

void func_0C6428(int a0)
{
    int v;

    v = D_001B4514;
    D_001B4524 = 0;
    D_001B4504 = 0;
    D_001B452C = 0;
    if (v != 0 && a0 == 0) {
        func_0A50B0(7);
    }
    D_001B4514 = 0;
    D_001B4520 = 0;
}
