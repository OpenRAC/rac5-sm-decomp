/* LEVEL_08:0x0E1CF0 -- placement copy of FRONTEND_013EC0.c: clears several status words and, when a handle is set and the argument is zero, calls a helper with a fixed code before clearing the handle slot. */

extern int D_0024F524;
extern int D_0024F534;
extern int D_0024F514;
extern unsigned char D_0024F53C;
extern int D_0024F530;

void func_0C0F10(int a0);

void func_0E1CF0(int a0)
{
    int v;

    v = D_0024F524;
    D_0024F534 = 0;
    D_0024F514 = 0;
    D_0024F53C = 0;
    if (v != 0 && a0 == 0) {
        func_0C0F10(7);
    }
    D_0024F524 = 0;
    D_0024F530 = 0;
}
