/* LEVEL_19:0x0B6B88 -- placement copy of LEVEL_01_0C8640.c: runs the setter on the argument with 8 when the global mode is 1, otherwise with 0x1D. */
extern int D_001AFE04;
extern void func_112450(int *p, int a1);

void func_0B6B88(int *p)
{
    if (D_001AFE04 == 1) {
        func_112450(p, 8);
    } else {
        func_112450(p, 0x1D);
    }
}
