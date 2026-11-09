/* LEVEL_22:0x0A4E60 -- placement copy of LEVEL_01_0B6910.c: resets one slot of seven parallel tables and clears its object. */
extern char D_0015BCA8[];
extern float D_0015BB78[];
extern int D_0015BB80[];
extern int D_0015BB88[];
extern int D_0015BB90[];
extern int D_0015BB98[];
extern int D_0015BB40[];
extern int D_0015BBA0[];

void func_0A4D10(void *p);

void func_0A4E60(int param_1)
{
    func_0A4D10(D_0015BCA8 + param_1 * 0x38);
    D_0015BB78[param_1] = 1.0f;
    D_0015BB80[param_1] = 0;
    D_0015BB88[param_1] = 0;
    D_0015BB90[param_1] = 100;
    D_0015BB98[param_1] = 100;
    D_0015BBA0[param_1] = 0xFF09A5D0;
    D_0015BB40[param_1] = 0;
}
