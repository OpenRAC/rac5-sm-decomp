/* LEVEL_15:0x0B7370 -- placement copy of FRONTEND_013EC0.c: clears several status words and, when a handle is set and the argument is zero, calls a helper with a fixed code before clearing the handle slot. */

extern int D_0015B2E4;
extern int D_0015B2F4;
extern int D_0015B2D4;
extern unsigned char D_0015B2FC;
extern int D_0015B2F0;

extern int func_096530(int index);

void func_0B7370(int a0)
{
    int v;

    v = D_0015B2E4;
    D_0015B2F4 = 0;
    D_0015B2D4 = 0;
    D_0015B2FC = 0;
    if (v != 0 && a0 == 0) {
        func_096530(7);
    }
    D_0015B2E4 = 0;
    D_0015B2F0 = 0;
}
