/* LEVEL_08:0x0D3568 -- placement copy of LEVEL_01_0C8640.c: runs the setter on the argument with 8 when the global mode is 1, otherwise with 0x1D. */
extern int D_00249ACC;
extern void func_146C18(int *p, int a1);

void func_0D3568(int *p)
{
    if (D_00249ACC == 1) {
        func_146C18(p, 8);
    } else {
        func_146C18(p, 0x1D);
    }
}
