/* LEVEL_22:0x0B5900 -- placement copy of LEVEL_01_0C7450.c: forwards the object to the shared handler with a fixed code when the mode is 1 (raising its flag), else with the stored code. */
extern int D_0015FF8C;
extern unsigned char D_0015FF31;
extern int D_0015FF94;
extern void func_10CBB0(int *p, int a1);

void func_0B5900(int *p)
{
    if (D_0015FF8C == 1) {
        D_0015FF31 = 1;
        func_10CBB0(p, 0x1F);
    } else {
        func_10CBB0(p, D_0015FF94);
    }
}
