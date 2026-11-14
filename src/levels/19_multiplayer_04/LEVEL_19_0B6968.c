/* LEVEL_19:0x0B6968 -- placement copy of LEVEL_01_0C8420.c: applies one of two settings depending on the aspect-ratio id, recording the fallback mode otherwise. */
extern int D_001AFE04;
extern int D_001AFE0C;
extern void func_112450(int *p, int a1);

void func_0B6968(int *p)
{
    if (D_001AFE04 == 1) {
        func_112450(p, 0x1D);
    } else {
        D_001AFE0C = 0x12;
        func_112450(p, 0x13);
    }
}
