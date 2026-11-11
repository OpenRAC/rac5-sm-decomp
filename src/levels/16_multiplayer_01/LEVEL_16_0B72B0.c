/* LEVEL_16:0x0B72B0 -- placement copy of LEVEL_01_0C8640.c: runs the setter on the argument with 8 when the global mode is 1, otherwise with 0x1D. */
extern int D_001AEC84;
extern void func_111DB0(int *p, int a1);

void func_0B72B0(int *p)
{
    if (D_001AEC84 == 1) {
        func_111DB0(p, 8);
    } else {
        func_111DB0(p, 0x1D);
    }
}
