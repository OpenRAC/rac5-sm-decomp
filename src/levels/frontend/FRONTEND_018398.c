/* FRONTEND:0x018398 -- placement copy of LEVEL_01_0C8360.c: applies one of two settings to a value depending on the aspect-ratio id, remembering the second choice in a global. */
extern int D_0003048C;
extern int D_00030494;
extern void func_0229A0(int *p, int a1);

void func_018398(int *p)
{
    if (D_0003048C == 1) {
        func_0229A0(p, 0x1D);
    } else {
        D_00030494 = 0x11;
        func_0229A0(p, 0x13);
    }
}
