/* LEVEL_03:0x0B66F8 -- placement copy of LEVEL_01_0B6910.c: resets one slot of seven parallel tables and clears its object. */
extern char D_00214FA8[];
extern float D_00214E78[];
extern int D_00214E80[];
extern int D_00214E88[];
extern int D_00214E90[];
extern int D_00214E98[];
extern int D_00214E40[];
extern int D_00214EA0[];

void func_0B65A8(void *p);

void func_0B66F8(int param_1)
{
    func_0B65A8(D_00214FA8 + param_1 * 0x38);
    D_00214E78[param_1] = 1.0f;
    D_00214E80[param_1] = 0;
    D_00214E88[param_1] = 0;
    D_00214E90[param_1] = 100;
    D_00214E98[param_1] = 100;
    D_00214EA0[param_1] = 0xFF09A5D0;
    D_00214E40[param_1] = 0;
}
