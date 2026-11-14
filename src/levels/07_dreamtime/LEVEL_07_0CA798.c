/* LEVEL_07:0x0CA798 -- placement copy of LEVEL_01_0C8738.c: applies one of two settings depending on the aspect-ratio id, recording the fallback mode otherwise. */
extern int D_00214F0C;
extern int D_00214F14;
extern void func_1386E0(int *p, int a1);

void func_0CA798(int *p)
{
    if (D_00214F0C == 1) {
        func_1386E0(p, 1);
    } else {
        D_00214F14 = 0x1D;
        func_1386E0(p, 0x13);
    }
}
