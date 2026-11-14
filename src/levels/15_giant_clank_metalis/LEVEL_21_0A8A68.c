/* LEVEL_21:0x0A8A68 -- placement copy of LEVEL_01_0C8420.c: applies one of two settings depending on the aspect-ratio id, recording the fallback mode otherwise. */
extern int D_0015588C;
extern int D_00155894;
extern void func_0F45A8(int *p, int a1);

void func_0A8A68(int *p)
{
    if (D_0015588C == 1) {
        func_0F45A8(p, 0x1D);
    } else {
        D_00155894 = 0x12;
        func_0F45A8(p, 0x13);
    }
}
