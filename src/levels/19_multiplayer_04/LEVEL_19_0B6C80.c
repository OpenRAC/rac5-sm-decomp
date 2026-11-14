/* LEVEL_19:0x0B6C80 -- placement copy of LEVEL_01_0C8738.c: applies one of two settings depending on the aspect-ratio id, recording the fallback mode otherwise. */
extern int D_001AFE04;
extern int D_001AFE0C;
extern void func_112450(int *p, int a1);

void func_0B6C80(int *p)
{
    if (D_001AFE04 == 1) {
        func_112450(p, 1);
    } else {
        D_001AFE0C = 0x1D;
        func_112450(p, 0x13);
    }
}
