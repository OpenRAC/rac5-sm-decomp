/* LEVEL_05:0x0D52D8 -- placement copy of FRONTEND_013EC0.c: clears several status words and, when a handle is set and the argument is zero, calls a helper with a fixed code before clearing the handle slot. */

extern int D_001F59E4;
extern int D_001F59F4;
extern int D_001F59D4;
extern unsigned char D_001F59FC;
extern int D_001F59F0;

void func_0B45C8(int a0);

void func_0D52D8(int a0)
{
    int v;

    v = D_001F59E4;
    D_001F59F4 = 0;
    D_001F59D4 = 0;
    D_001F59FC = 0;
    if (v != 0 && a0 == 0) {
        func_0B45C8(7);
    }
    D_001F59E4 = 0;
    D_001F59F0 = 0;
}
