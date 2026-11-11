/* FRONTEND:0x013EC0 -- clears several status words and, when a handle is set and the argument is zero, calls a helper with a fixed code before clearing the handle slot. */

extern int D_0003019C;
extern int D_000301AC;
extern int D_0003018C;
extern unsigned char D_000301B4;
extern int D_000301A8;

int func_0145C8(int a0);

void func_013EC0(int a0)
{
    int v;

    v = D_0003019C;
    D_000301AC = 0;
    D_0003018C = 0;
    D_000301B4 = 0;
    if (v != 0 && a0 == 0) {
        func_0145C8(7);
    }
    D_0003019C = 0;
    D_000301A8 = 0;
}
