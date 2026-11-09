/* LEVEL_18:0x0C5400 -- placement copy of FRONTEND_013EC0.c: clears several status words and, when a handle is set and the argument is zero, calls a helper with a fixed code before clearing the handle slot. */

extern int D_001B5994;
extern int D_001B59A4;
extern int D_001B5984;
extern unsigned char D_001B59AC;
extern int D_001B59A0;

void func_0A40A8(int a0);

void func_0C5400(int a0)
{
    int v;

    v = D_001B5994;
    D_001B59A4 = 0;
    D_001B5984 = 0;
    D_001B59AC = 0;
    if (v != 0 && a0 == 0) {
        func_0A40A8(7);
    }
    D_001B5994 = 0;
    D_001B59A0 = 0;
}
