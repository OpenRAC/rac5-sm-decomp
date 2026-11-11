/* LEVEL_09:0x0D3FE0 -- placement copy of FRONTEND_013EC0.c: clears several status words and, when a handle is set and the argument is zero, calls a helper with a fixed code before clearing the handle slot. */

extern int D_001F0464;
extern int D_001F0474;
extern int D_001F0454;
extern unsigned char D_001F047C;
extern int D_001F0470;

extern int func_0B32D0(int index);

void func_0D3FE0(int a0)
{
    int v;

    v = D_001F0464;
    D_001F0474 = 0;
    D_001F0454 = 0;
    D_001F047C = 0;
    if (v != 0 && a0 == 0) {
        func_0B32D0(7);
    }
    D_001F0464 = 0;
    D_001F0470 = 0;
}
