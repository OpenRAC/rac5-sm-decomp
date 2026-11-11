/* LEVEL_08:0x0D2378 -- placement copy of LEVEL_01_0C7450.c: forwards the object to the shared handler with a fixed code when the mode is 1 (raising its flag), else with the stored code. */
extern int D_00249ACC;
extern unsigned char D_00249A71;
extern int D_00249AD4;
extern void func_146C18(int *p, int a1);

void func_0D2378(int *p)
{
    if (D_00249ACC == 1) {
        D_00249A71 = 1;
        func_146C18(p, 0x1F);
    } else {
        func_146C18(p, D_00249AD4);
    }
}
