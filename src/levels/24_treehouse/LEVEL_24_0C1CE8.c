/* LEVEL_24:0x0C1CE8 -- placement copy of LEVEL_01_0C8420.c: applies one of two settings depending on the aspect-ratio id, recording the fallback mode otherwise. */
extern int D_001D188C;
extern int D_001D1894;
extern void func_12B1E0(int *p, int a1);

void func_0C1CE8(int *p)
{
    if (D_001D188C == 1) {
        func_12B1E0(p, 0x1D);
    } else {
        D_001D1894 = 0x12;
        func_12B1E0(p, 0x13);
    }
}
