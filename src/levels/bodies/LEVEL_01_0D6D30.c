/* LEVEL_01:0x0D6D30 -- placement copy of FRONTEND_013EC0.c: clears several status words and, when a handle is set and the argument is zero, calls a helper with a fixed code before clearing the handle slot. */

extern int D_00206664;
extern int D_00206674;
extern int D_00206654;
extern unsigned char D_0020667C;
extern int D_00206670;

extern int func_0B6020(int index);

void func_0D6D30(int a0)
{
    int v;

    v = D_00206664;
    D_00206674 = 0;
    D_00206654 = 0;
    D_0020667C = 0;
    if (v != 0 && a0 == 0) {
        func_0B6020(7);
    }
    D_00206664 = 0;
    D_00206670 = 0;
}
