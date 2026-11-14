/* LEVEL_05:0x0C69C8 -- placement copy of LEVEL_01_0C8420.c: applies one of two settings depending on the aspect-ratio id, recording the fallback mode otherwise. */
extern int D_001EFF8C;
extern int D_001EFF94;
extern void func_131058(int *p, int a1);

void func_0C69C8(int *p)
{
    if (D_001EFF8C == 1) {
        func_131058(p, 0x1D);
    } else {
        D_001EFF94 = 0x12;
        func_131058(p, 0x13);
    }
}
