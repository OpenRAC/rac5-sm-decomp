/* LEVEL_06:0x0C2F40 -- placement copy of LEVEL_01_0C8640.c: runs the setter on the argument with 8 when the global mode is 1, otherwise with 0x1D. */
extern int D_001EFB0C;
extern void func_12BDB0(int *p, int a1);

void func_0C2F40(int *p)
{
    if (D_001EFB0C == 1) {
        func_12BDB0(p, 8);
    } else {
        func_12BDB0(p, 0x1D);
    }
}
