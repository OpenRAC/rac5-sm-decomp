/* LEVEL_23:0x0CDB60 -- placement copy of FRONTEND_013EC0.c: clears several status words and, when a handle is set and the argument is zero, calls a helper with a fixed code before clearing the handle slot. */

extern int D_001D9A64;
extern int D_001D9A74;
extern int D_001D9A54;
extern unsigned char D_001D9A7C;
extern int D_001D9A70;

extern int func_0ACDE8(int index);

void func_0CDB60(int a0)
{
    int v;

    v = D_001D9A64;
    D_001D9A74 = 0;
    D_001D9A54 = 0;
    D_001D9A7C = 0;
    if (v != 0 && a0 == 0) {
        func_0ACDE8(7);
    }
    D_001D9A64 = 0;
    D_001D9A70 = 0;
}
