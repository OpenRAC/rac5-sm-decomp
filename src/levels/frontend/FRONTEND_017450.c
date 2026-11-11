/* FRONTEND:0x017450 -- placement copy of LEVEL_01_0C7450.c: forwards the object to the shared handler with a fixed code when the mode is 1 (raising its flag), else with the stored code. */
extern int D_0003048C;
extern unsigned char D_00030439;
extern int D_00030494;
extern void func_0229A0(int *p, int a1);

void func_017450(int *p)
{
    if (D_0003048C == 1) {
        D_00030439 = 1;
        func_0229A0(p, 0x1F);
    } else {
        func_0229A0(p, D_00030494);
    }
}
