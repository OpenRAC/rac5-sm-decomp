/* LEVEL_23:0x0BF3E0 -- placement copy of LEVEL_01_0C8640.c: runs the setter on the argument with 8 when the global mode is 1, otherwise with 0x1D. */
extern int D_001D400C;
extern void func_126E58(int *p, int a1);

void func_0BF3E0(int *p)
{
    if (D_001D400C == 1) {
        func_126E58(p, 8);
    } else {
        func_126E58(p, 0x1D);
    }
}
