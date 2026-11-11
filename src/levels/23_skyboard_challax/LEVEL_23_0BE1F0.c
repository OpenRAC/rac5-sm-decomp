/* LEVEL_23:0x0BE1F0 -- placement copy of LEVEL_01_0C7450.c: forwards the object to the shared handler with a fixed code when the mode is 1 (raising its flag), else with the stored code. */
extern int D_001D400C;
extern unsigned char D_001D3FB1;
extern int D_001D4014;
extern void func_126E58(int *p, int a1);

void func_0BE1F0(int *p)
{
    if (D_001D400C == 1) {
        D_001D3FB1 = 1;
        func_126E58(p, 0x1F);
    } else {
        func_126E58(p, D_001D4014);
    }
}
