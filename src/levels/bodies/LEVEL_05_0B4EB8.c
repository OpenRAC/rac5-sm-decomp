/* LEVEL_05:0x0B4EB8 -- placement copy of LEVEL_01_0B6910.c: resets one slot of seven parallel tables and clears its object. */
extern char D_001EBCA8[];
extern float D_001EBB78[];
extern int D_001EBB80[];
extern int D_001EBB88[];
extern int D_001EBB90[];
extern int D_001EBB98[];
extern int D_001EBB40[];
extern int D_001EBBA0[];

void func_0B4D68(void *p);

void func_0B4EB8(int param_1)
{
    func_0B4D68(D_001EBCA8 + param_1 * 0x38);
    D_001EBB78[param_1] = 1.0f;
    D_001EBB80[param_1] = 0;
    D_001EBB88[param_1] = 0;
    D_001EBB90[param_1] = 100;
    D_001EBB98[param_1] = 100;
    D_001EBBA0[param_1] = 0xFF09A5D0;
    D_001EBB40[param_1] = 0;
}
