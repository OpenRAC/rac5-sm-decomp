/* LEVEL_03:0x0C8428 -- placement copy of LEVEL_01_0C8640.c: runs the setter on the argument with 8 when the global mode is 1, otherwise with 0x1D. */
extern int D_0021928C;
extern void func_133AA8(int *p, int a1);

void func_0C8428(int *p)
{
    if (D_0021928C == 1) {
        func_133AA8(p, 8);
    } else {
        func_133AA8(p, 0x1D);
    }
}
