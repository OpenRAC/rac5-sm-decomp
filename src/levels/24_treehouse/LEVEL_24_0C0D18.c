/* LEVEL_24:0x0C0D18 -- placement copy of LEVEL_01_0C7450.c: forwards the object to the shared handler with a fixed code when the mode is 1 (raising its flag), else with the stored code. */
extern int D_001D188C;
extern unsigned char D_001D1831;
extern int D_001D1894;
extern void func_12B1E0(int *p, int a1);

void func_0C0D18(int *p)
{
    if (D_001D188C == 1) {
        D_001D1831 = 1;
        func_12B1E0(p, 0x1F);
    } else {
        func_12B1E0(p, D_001D1894);
    }
}
