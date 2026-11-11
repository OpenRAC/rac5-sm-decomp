/* LEVEL_21:0x096E20 -- placement copy of LEVEL_01_0B6910.c: resets one slot of seven parallel tables and clears its object. */
extern char D_001515A8[];
extern float D_00151478[];
extern int D_00151480[];
extern int D_00151488[];
extern int D_00151490[];
extern int D_00151498[];
extern int D_00151440[];
extern int D_001514A0[];

void func_096CD0(void *p);

void func_096E20(int param_1)
{
    func_096CD0(D_001515A8 + param_1 * 0x38);
    D_00151478[param_1] = 1.0f;
    D_00151480[param_1] = 0;
    D_00151488[param_1] = 0;
    D_00151490[param_1] = 100;
    D_00151498[param_1] = 100;
    D_001514A0[param_1] = 0xFF09A5D0;
    D_00151440[param_1] = 0;
}
