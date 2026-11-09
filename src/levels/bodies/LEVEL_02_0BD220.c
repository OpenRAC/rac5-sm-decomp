/* LEVEL_02:0x0BD220 -- placement copy of LEVEL_01_0B6910.c: resets one slot of seven parallel tables and clears its object. */
extern char D_002118E8[];
extern float D_002117B8[];
extern int D_002117C0[];
extern int D_002117C8[];
extern int D_002117D0[];
extern int D_002117D8[];
extern int D_00211780[];
extern int D_002117E0[];

void func_0BD0D0(void *p);

void func_0BD220(int param_1)
{
    func_0BD0D0(D_002118E8 + param_1 * 0x38);
    D_002117B8[param_1] = 1.0f;
    D_002117C0[param_1] = 0;
    D_002117C8[param_1] = 0;
    D_002117D0[param_1] = 100;
    D_002117D8[param_1] = 100;
    D_002117E0[param_1] = 0xFF09A5D0;
    D_00211780[param_1] = 0;
}
