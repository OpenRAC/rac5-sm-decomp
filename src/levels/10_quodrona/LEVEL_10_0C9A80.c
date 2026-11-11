/* LEVEL_10:0x0C9A80 -- placement copy of LEVEL_01_0C8640.c: runs the setter on the argument with 8 when the global mode is 1, otherwise with 0x1D. */
extern int D_00209C0C;
extern void func_133560(int *p, int a1);

void func_0C9A80(int *p)
{
    if (D_00209C0C == 1) {
        func_133560(p, 8);
    } else {
        func_133560(p, 0x1D);
    }
}
