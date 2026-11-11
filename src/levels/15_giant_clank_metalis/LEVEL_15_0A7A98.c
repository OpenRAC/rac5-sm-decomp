/* LEVEL_15:0x0A7A98 -- placement copy of LEVEL_01_0C7450.c: forwards the object to the shared handler with a fixed code when the mode is 1 (raising its flag), else with the stored code. */
extern int D_0015588C;
extern unsigned char D_00155831;
extern int D_00155894;
extern void func_0F45A8(int *p, int a1);

void func_0A7A98(int *p)
{
    if (D_0015588C == 1) {
        D_00155831 = 1;
        func_0F45A8(p, 0x1F);
    } else {
        func_0F45A8(p, D_00155894);
    }
}
