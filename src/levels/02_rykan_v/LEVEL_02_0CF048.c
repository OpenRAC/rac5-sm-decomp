/* LEVEL_02:0x0CF048 -- placement copy of LEVEL_01_0C8738.c: applies one of two settings depending on the aspect-ratio id, recording the fallback mode otherwise. */
extern int D_00215BCC;
extern int D_00215BD4;
extern void func_13BA90(int *p, int a1);

void func_0CF048(int *p)
{
    if (D_00215BCC == 1) {
        func_13BA90(p, 1);
    } else {
        D_00215BD4 = 0x1D;
        func_13BA90(p, 0x13);
    }
}
