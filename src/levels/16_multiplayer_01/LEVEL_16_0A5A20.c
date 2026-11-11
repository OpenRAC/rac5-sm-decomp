/* LEVEL_16:0x0A5A20 -- placement copy of LEVEL_01_0B6910.c: resets one slot of seven parallel tables and clears its object. */
extern char D_001AA9A8[];
extern float D_001AA878[];
extern int D_001AA880[];
extern int D_001AA888[];
extern int D_001AA890[];
extern int D_001AA898[];
extern int D_001AA840[];
extern int D_001AA8A0[];

void func_0A58D0(void *p);

void func_0A5A20(int param_1)
{
    func_0A58D0(D_001AA9A8 + param_1 * 0x38);
    D_001AA878[param_1] = 1.0f;
    D_001AA880[param_1] = 0;
    D_001AA888[param_1] = 0;
    D_001AA890[param_1] = 100;
    D_001AA898[param_1] = 100;
    D_001AA8A0[param_1] = 0xFF09A5D0;
    D_001AA840[param_1] = 0;
}
