/* LEVEL_10:0x0C9860 -- placement copy of LEVEL_01_0C8420.c: applies one of two settings depending on the aspect-ratio id, recording the fallback mode otherwise. */
extern int D_00209C0C;
extern int D_00209C14;
extern void func_133560(int *p, int a1);

void func_0C9860(int *p)
{
    if (D_00209C0C == 1) {
        func_133560(p, 0x1D);
    } else {
        D_00209C14 = 0x12;
        func_133560(p, 0x13);
    }
}
