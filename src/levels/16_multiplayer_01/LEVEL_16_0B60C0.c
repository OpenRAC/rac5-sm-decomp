/* LEVEL_16:0x0B60C0 -- placement copy of LEVEL_01_0C7450.c: forwards the object to the shared handler with a fixed code when the mode is 1 (raising its flag), else with the stored code. */
extern int D_001AEC84;
extern unsigned char D_001AEC29;
extern int D_001AEC8C;
extern void func_111DB0(int *p, int a1);

void func_0B60C0(int *p)
{
    if (D_001AEC84 == 1) {
        D_001AEC29 = 1;
        func_111DB0(p, 0x1F);
    } else {
        func_111DB0(p, D_001AEC8C);
    }
}
