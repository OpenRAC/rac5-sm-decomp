/* LEVEL_19:0x0C5D00 -- placement copy of FRONTEND_013EC0.c: clears several status words and, when a handle is set and the argument is zero, calls a helper with a fixed code before clearing the handle slot. */

extern int D_001B5694;
extern int D_001B56A4;
extern int D_001B5684;
extern unsigned char D_001B56AC;
extern int D_001B56A0;

void func_0A4928(int a0);

void func_0C5D00(int a0)
{
    int v;

    v = D_001B5694;
    D_001B56A4 = 0;
    D_001B5684 = 0;
    D_001B56AC = 0;
    if (v != 0 && a0 == 0) {
        func_0A4928(7);
    }
    D_001B5694 = 0;
    D_001B56A0 = 0;
}
