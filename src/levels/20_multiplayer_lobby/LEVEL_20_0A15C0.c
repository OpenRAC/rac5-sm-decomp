/* LEVEL_20:0x0A15C0 -- placement copy of LEVEL_01_0C8420.c: applies one of two settings depending on the aspect-ratio id, recording the fallback mode otherwise. */
extern int D_00111364;
extern int D_0011136C;
extern void func_0E4B98(int *p, int a1);

void func_0A15C0(int *p)
{
    if (D_00111364 == 1) {
        func_0E4B98(p, 0x1D);
    } else {
        D_0011136C = 0x12;
        func_0E4B98(p, 0x13);
    }
}
