/* LEVEL_05:0x0C59F8 -- placement copy of LEVEL_01_0C7450.c: forwards the object to the shared handler with a fixed code when the mode is 1 (raising its flag), else with the stored code. */
extern int D_001EFF8C;
extern unsigned char D_001EFF31;
extern int D_001EFF94;
extern void func_131058(int *p, int a1);

void func_0C59F8(int *p)
{
    if (D_001EFF8C == 1) {
        D_001EFF31 = 1;
        func_131058(p, 0x1F);
    } else {
        func_131058(p, D_001EFF94);
    }
}
