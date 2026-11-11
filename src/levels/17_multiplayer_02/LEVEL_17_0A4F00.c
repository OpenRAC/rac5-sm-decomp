/* LEVEL_17:0x0A4F00 -- placement copy of LEVEL_01_0B6910.c: resets one slot of seven parallel tables and clears its object. */
extern char D_0019DFA8[];
extern float D_0019DE78[];
extern int D_0019DE80[];
extern int D_0019DE88[];
extern int D_0019DE90[];
extern int D_0019DE98[];
extern int D_0019DE40[];
extern int D_0019DEA0[];

void func_0A4DB0(void *p);

void func_0A4F00(int param_1)
{
    func_0A4DB0(D_0019DFA8 + param_1 * 0x38);
    D_0019DE78[param_1] = 1.0f;
    D_0019DE80[param_1] = 0;
    D_0019DE88[param_1] = 0;
    D_0019DE90[param_1] = 100;
    D_0019DE98[param_1] = 100;
    D_0019DEA0[param_1] = 0xFF09A5D0;
    D_0019DE40[param_1] = 0;
}
