/* LEVEL_17:0x0B67F0 -- placement copy of LEVEL_01_0C8640.c: runs the setter on the argument with 8 when the global mode is 1, otherwise with 0x1D. */
extern int D_001A2284;
extern void func_111328(int *p, int a1);

void func_0B67F0(int *p)
{
    if (D_001A2284 == 1) {
        func_111328(p, 8);
    } else {
        func_111328(p, 0x1D);
    }
}
