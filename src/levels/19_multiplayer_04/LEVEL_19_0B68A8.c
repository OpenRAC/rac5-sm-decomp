/* LEVEL_19:0x0B68A8 -- placement copy of LEVEL_01_0C8360.c: applies one of two settings to a value depending on the aspect-ratio id, remembering the second choice in a global. */
extern int D_001AFE04;
extern int D_001AFE0C;
extern void func_112450(int *p, int a1);

void func_0B68A8(int *p)
{
    if (D_001AFE04 == 1) {
        func_112450(p, 0x1D);
    } else {
        D_001AFE0C = 0x11;
        func_112450(p, 0x13);
    }
}
