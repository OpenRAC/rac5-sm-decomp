/* LEVEL_06:0x0C3038 -- placement copy of LEVEL_01_0C8738.c: applies one of two settings depending on the aspect-ratio id, recording the fallback mode otherwise. */
extern int D_001EFB0C;
extern int D_001EFB14;
extern void func_12BDB0(int *p, int a1);

void func_0C3038(int *p)
{
    if (D_001EFB0C == 1) {
        func_12BDB0(p, 1);
    } else {
        D_001EFB14 = 0x1D;
        func_12BDB0(p, 0x13);
    }
}
