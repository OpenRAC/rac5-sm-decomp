/* LEVEL_03:0x0C8208 -- placement copy of LEVEL_01_0C8420.c: applies one of two settings depending on the aspect-ratio id, recording the fallback mode otherwise. */
extern int D_0021928C;
extern int D_00219294;
extern void func_133AA8(int *p, int a1);

void func_0C8208(int *p)
{
    if (D_0021928C == 1) {
        func_133AA8(p, 0x1D);
    } else {
        D_00219294 = 0x12;
        func_133AA8(p, 0x13);
    }
}
