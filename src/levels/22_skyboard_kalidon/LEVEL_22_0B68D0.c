/* LEVEL_22:0x0B68D0 -- placement copy of LEVEL_01_0C8420.c: applies one of two settings depending on the aspect-ratio id, recording the fallback mode otherwise. */
extern int D_0015FF8C;
extern int D_0015FF94;
extern void func_10CBB0(int *p, int a1);

void func_0B68D0(int *p)
{
    if (D_0015FF8C == 1) {
        func_10CBB0(p, 0x1D);
    } else {
        D_0015FF94 = 0x12;
        func_10CBB0(p, 0x13);
    }
}
