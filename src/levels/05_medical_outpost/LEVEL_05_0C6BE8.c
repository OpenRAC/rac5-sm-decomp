/* LEVEL_05:0x0C6BE8 -- placement copy of LEVEL_01_0C8640.c: runs the setter on the argument with 8 when the global mode is 1, otherwise with 0x1D. */
extern int D_001EFF8C;
extern void func_131058(int *p, int a1);

void func_0C6BE8(int *p)
{
    if (D_001EFF8C == 1) {
        func_131058(p, 8);
    } else {
        func_131058(p, 0x1D);
    }
}
