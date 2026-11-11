/* LEVEL_07:0x0CA6A0 -- placement copy of LEVEL_01_0C8640.c: runs the setter on the argument with 8 when the global mode is 1, otherwise with 0x1D. */
extern int D_00214F0C;
extern void func_1386E0(int *p, int a1);

void func_0CA6A0(int *p)
{
    if (D_00214F0C == 1) {
        func_1386E0(p, 8);
    } else {
        func_1386E0(p, 0x1D);
    }
}
