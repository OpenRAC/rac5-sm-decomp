/* LEVEL_24:0x0B01A0 -- placement copy of LEVEL_01_0B6910.c: resets one slot of seven parallel tables and clears its object. */
extern char D_001CD5A8[];
extern float D_001CD478[];
extern int D_001CD480[];
extern int D_001CD488[];
extern int D_001CD490[];
extern int D_001CD498[];
extern int D_001CD440[];
extern int D_001CD4A0[];

void func_0B0050(void *p);

void func_0B01A0(int param_1)
{
    func_0B0050(D_001CD5A8 + param_1 * 0x38);
    D_001CD478[param_1] = 1.0f;
    D_001CD480[param_1] = 0;
    D_001CD488[param_1] = 0;
    D_001CD490[param_1] = 100;
    D_001CD498[param_1] = 100;
    D_001CD4A0[param_1] = 0xFF09A5D0;
    D_001CD440[param_1] = 0;
}
