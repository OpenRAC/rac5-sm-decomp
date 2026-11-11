/* LEVEL_09:0x0B3BC0 -- placement copy of LEVEL_01_0B6910.c: resets one slot of seven parallel tables and clears its object. */
extern char D_001E6728[];
extern float D_001E65F8[];
extern int D_001E6600[];
extern int D_001E6608[];
extern int D_001E6610[];
extern int D_001E6618[];
extern int D_001E65C0[];
extern int D_001E6620[];

void func_0B3A70(void *p);

void func_0B3BC0(int param_1)
{
    func_0B3A70(D_001E6728 + param_1 * 0x38);
    D_001E65F8[param_1] = 1.0f;
    D_001E6600[param_1] = 0;
    D_001E6608[param_1] = 0;
    D_001E6610[param_1] = 100;
    D_001E6618[param_1] = 100;
    D_001E6620[param_1] = 0xFF09A5D0;
    D_001E65C0[param_1] = 0;
}
