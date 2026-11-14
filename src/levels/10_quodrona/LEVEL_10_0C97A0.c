/* LEVEL_10:0x0C97A0 -- placement copy of LEVEL_01_0C8360.c: applies one of two settings to a value depending on the aspect-ratio id, remembering the second choice in a global. */
extern int D_00209C0C;
extern int D_00209C14;
extern void func_133560(int *p, int a1);

void func_0C97A0(int *p)
{
    if (D_00209C0C == 1) {
        func_133560(p, 0x1D);
    } else {
        D_00209C14 = 0x11;
        func_133560(p, 0x13);
    }
}
