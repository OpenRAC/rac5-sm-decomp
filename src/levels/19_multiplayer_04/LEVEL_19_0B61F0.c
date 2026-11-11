/* LEVEL_19:0x0B61F0 -- placement copy of LEVEL_01_0C7CA8.c: applies one of two settings to a value depending on the aspect-ratio id. */
extern int D_001AFE04;
extern void func_112450(int *p, int a1);

void func_0B61F0(int *p)
{
    if (D_001AFE04 == 1) {
        func_112450(p, 0x1D);
    } else {
        func_112450(p, 0x1F);
    }
}
