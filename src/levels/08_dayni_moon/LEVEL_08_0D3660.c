/* LEVEL_08:0x0D3660 -- placement copy of LEVEL_01_0C8738.c: applies one of two settings depending on the aspect-ratio id, recording the fallback mode otherwise. */
extern int D_00249ACC;
extern int D_00249AD4;
extern void func_146C18(int *p, int a1);

void func_0D3660(int *p)
{
    if (D_00249ACC == 1) {
        func_146C18(p, 1);
    } else {
        D_00249AD4 = 0x1D;
        func_146C18(p, 0x13);
    }
}
