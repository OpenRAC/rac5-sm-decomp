/* LEVEL_23:0x0BF4D8 -- placement copy of LEVEL_01_0C8738.c: applies one of two settings depending on the aspect-ratio id, recording the fallback mode otherwise. */
extern int D_001D400C;
extern int D_001D4014;
extern void func_126E58(int *p, int a1);

void func_0BF4D8(int *p)
{
    if (D_001D400C == 1) {
        func_126E58(p, 1);
    } else {
        D_001D4014 = 0x1D;
        func_126E58(p, 0x13);
    }
}
