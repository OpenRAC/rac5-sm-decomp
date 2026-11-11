/* LEVEL_20:0x0A17E0 -- placement copy of LEVEL_01_0C8640.c: runs the setter on the argument with 8 when the global mode is 1, otherwise with 0x1D. */
extern int D_00111364;
extern void func_0E4B98(int *p, int a1);

void func_0A17E0(int *p)
{
    if (D_00111364 == 1) {
        func_0E4B98(p, 8);
    } else {
        func_0E4B98(p, 0x1D);
    }
}
