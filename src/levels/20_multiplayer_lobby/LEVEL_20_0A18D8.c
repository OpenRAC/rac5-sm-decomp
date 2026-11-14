/* LEVEL_20:0x0A18D8 -- placement copy of LEVEL_01_0C8738.c: applies one of two settings depending on the aspect-ratio id, recording the fallback mode otherwise. */
extern int D_00111364;
extern int D_0011136C;
extern void func_0E4B98(int *p, int a1);

void func_0A18D8(int *p)
{
    if (D_00111364 == 1) {
        func_0E4B98(p, 1);
    } else {
        D_0011136C = 0x1D;
        func_0E4B98(p, 0x13);
    }
}
