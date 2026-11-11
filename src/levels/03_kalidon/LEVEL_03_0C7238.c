/* LEVEL_03:0x0C7238 -- placement copy of LEVEL_01_0C7450.c: forwards the object to the shared handler with a fixed code when the mode is 1 (raising its flag), else with the stored code. */
extern int D_0021928C;
extern unsigned char D_00219231;
extern int D_00219294;
extern void func_133AA8(int *p, int a1);

void func_0C7238(int *p)
{
    if (D_0021928C == 1) {
        D_00219231 = 1;
        func_133AA8(p, 0x1F);
    } else {
        func_133AA8(p, D_00219294);
    }
}
