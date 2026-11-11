/* LEVEL_24:0x0C1F08 -- placement copy of LEVEL_01_0C8640.c: runs the setter on the argument with 8 when the global mode is 1, otherwise with 0x1D. */
extern int D_001D188C;
extern void func_12B1E0(int *p, int a1);

void func_0C1F08(int *p)
{
    if (D_001D188C == 1) {
        func_12B1E0(p, 8);
    } else {
        func_12B1E0(p, 0x1D);
    }
}
