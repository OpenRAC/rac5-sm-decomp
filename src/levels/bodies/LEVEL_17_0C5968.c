/* LEVEL_17:0x0C5968 -- placement copy of FRONTEND_013EC0.c: clears several status words and, when a handle is set and the argument is zero, calls a helper with a fixed code before clearing the handle slot. */

extern int D_001A7B14;
extern int D_001A7B24;
extern int D_001A7B04;
extern unsigned char D_001A7B2C;
extern int D_001A7B20;

extern int func_0A4590(int a);

void func_0C5968(int a0)
{
    int v;

    v = D_001A7B14;
    D_001A7B24 = 0;
    D_001A7B04 = 0;
    D_001A7B2C = 0;
    if (v != 0 && a0 == 0) {
        func_0A4590(7);
    }
    D_001A7B14 = 0;
    D_001A7B20 = 0;
}
