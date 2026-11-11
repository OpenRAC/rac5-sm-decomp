/* LEVEL_20:0x0A05F0 -- placement copy of LEVEL_01_0C7450.c: forwards the object to the shared handler with a fixed code when the mode is 1 (raising its flag), else with the stored code. */
extern int D_00111364;
extern unsigned char D_00111309;
extern int D_0011136C;
extern void func_0E4B98(int *p, int a1);

void func_0A05F0(int *p)
{
    if (D_00111364 == 1) {
        D_00111309 = 1;
        func_0E4B98(p, 0x1F);
    } else {
        func_0E4B98(p, D_0011136C);
    }
}
