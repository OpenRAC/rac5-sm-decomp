/* LEVEL_06:0x0B11E0 -- placement copy of LEVEL_01_0B6910.c: resets one slot of seven parallel tables and clears its object. */
extern char D_001EB828[];
extern float D_001EB6F8[];
extern int D_001EB700[];
extern int D_001EB708[];
extern int D_001EB710[];
extern int D_001EB718[];
extern int D_001EB6C0[];
extern int D_001EB720[];

void func_0B1090(void *p);

void func_0B11E0(int param_1)
{
    func_0B1090(D_001EB828 + param_1 * 0x38);
    D_001EB6F8[param_1] = 1.0f;
    D_001EB700[param_1] = 0;
    D_001EB708[param_1] = 0;
    D_001EB710[param_1] = 100;
    D_001EB718[param_1] = 100;
    D_001EB720[param_1] = 0xFF09A5D0;
    D_001EB6C0[param_1] = 0;
}
