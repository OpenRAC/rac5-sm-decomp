/* FRONTEND:0x018678 -- placement copy of LEVEL_01_0C8640.c: runs the setter on the argument with 8 when the global mode is 1, otherwise with 0x1D. */
extern int D_0003048C;
extern void func_0229A0(int *p, int a1);

void func_018678(int *p)
{
    if (D_0003048C == 1) {
        func_0229A0(p, 8);
    } else {
        func_0229A0(p, 0x1D);
    }
}
