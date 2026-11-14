/* LEVEL_20:0x0A1500 -- placement copy of LEVEL_01_0C8360.c: applies one of two settings to a value depending on the aspect-ratio id, remembering the second choice in a global. */
extern int D_00111364;
extern int D_0011136C;
extern void func_0E4B98(int *p, int a1);

void func_0A1500(int *p)
{
    if (D_00111364 == 1) {
        func_0E4B98(p, 0x1D);
    } else {
        D_0011136C = 0x11;
        func_0E4B98(p, 0x13);
    }
}
