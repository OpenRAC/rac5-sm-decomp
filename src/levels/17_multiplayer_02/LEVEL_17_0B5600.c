/* LEVEL_17:0x0B5600 -- placement copy of LEVEL_01_0C7450.c: forwards the object to the shared handler with a fixed code when the mode is 1 (raising its flag), else with the stored code. */
extern int D_001A2284;
extern unsigned char D_001A2229;
extern int D_001A228C;
extern void func_111328(int *p, int a1);

void func_0B5600(int *p)
{
    if (D_001A2284 == 1) {
        D_001A2229 = 1;
        func_111328(p, 0x1F);
    } else {
        func_111328(p, D_001A228C);
    }
}
