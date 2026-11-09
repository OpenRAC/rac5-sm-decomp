/* LEVEL_08:0x0C1800 -- placement copy of LEVEL_01_0B6910.c: resets one slot of seven parallel tables and clears its object. */
extern char D_002457E8[];
extern float D_002456B8[];
extern int D_002456C0[];
extern int D_002456C8[];
extern int D_002456D0[];
extern int D_002456D8[];
extern int D_00245680[];
extern int D_002456E0[];

void func_0C16B0(void *p);

void func_0C1800(int param_1)
{
    func_0C16B0(D_002457E8 + param_1 * 0x38);
    D_002456B8[param_1] = 1.0f;
    D_002456C0[param_1] = 0;
    D_002456C8[param_1] = 0;
    D_002456D0[param_1] = 100;
    D_002456D8[param_1] = 100;
    D_002456E0[param_1] = 0xFF09A5D0;
    D_00245680[param_1] = 0;
}
