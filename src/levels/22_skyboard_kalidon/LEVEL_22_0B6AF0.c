/* LEVEL_22:0x0B6AF0 -- placement copy of LEVEL_01_0C8640.c: runs the setter on the argument with 8 when the global mode is 1, otherwise with 0x1D. */
extern int D_0015FF8C;
extern void func_10CBB0(int *p, int a1);

void func_0B6AF0(int *p)
{
    if (D_0015FF8C == 1) {
        func_10CBB0(p, 8);
    } else {
        func_10CBB0(p, 0x1D);
    }
}
