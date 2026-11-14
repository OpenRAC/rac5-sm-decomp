/* LEVEL_07:0x0CA480 -- placement copy of LEVEL_01_0C8420.c: applies one of two settings depending on the aspect-ratio id, recording the fallback mode otherwise. */
extern int D_00214F0C;
extern int D_00214F14;
extern void func_1386E0(int *p, int a1);

void func_0CA480(int *p)
{
    if (D_00214F0C == 1) {
        func_1386E0(p, 0x1D);
    } else {
        D_00214F14 = 0x12;
        func_1386E0(p, 0x13);
    }
}
