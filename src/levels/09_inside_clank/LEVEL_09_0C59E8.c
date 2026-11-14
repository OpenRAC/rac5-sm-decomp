/* LEVEL_09:0x0C59E8 -- placement copy of LEVEL_01_0C8738.c: applies one of two settings depending on the aspect-ratio id, recording the fallback mode otherwise. */
extern int D_001EAA0C;
extern int D_001EAA14;
extern void func_12E678(int *p, int a1);

void func_0C59E8(int *p)
{
    if (D_001EAA0C == 1) {
        func_12E678(p, 1);
    } else {
        D_001EAA14 = 0x1D;
        func_12E678(p, 0x13);
    }
}
