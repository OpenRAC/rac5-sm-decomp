/* LEVEL_10:0x0C9B78 -- placement copy of LEVEL_01_0C8738.c: applies one of two settings depending on the aspect-ratio id, recording the fallback mode otherwise. */
extern int D_00209C0C;
extern int D_00209C14;
extern void func_133560(int *p, int a1);

void func_0C9B78(int *p)
{
    if (D_00209C0C == 1) {
        func_133560(p, 1);
    } else {
        D_00209C14 = 0x1D;
        func_133560(p, 0x13);
    }
}
