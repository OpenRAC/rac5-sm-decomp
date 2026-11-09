/* LEVEL_04:0x0BC118 -- placement copy of LEVEL_01_0B6910.c: resets one slot of seven parallel tables and clears its object. */
extern char D_00215DE8[];
extern float D_00215CB8[];
extern int D_00215CC0[];
extern int D_00215CC8[];
extern int D_00215CD0[];
extern int D_00215CD8[];
extern int D_00215C80[];
extern int D_00215CE0[];

void func_0BBFC8(void *p);

void func_0BC118(int param_1)
{
    func_0BBFC8(D_00215DE8 + param_1 * 0x38);
    D_00215CB8[param_1] = 1.0f;
    D_00215CC0[param_1] = 0;
    D_00215CC8[param_1] = 0;
    D_00215CD0[param_1] = 100;
    D_00215CD8[param_1] = 100;
    D_00215CE0[param_1] = 0xFF09A5D0;
    D_00215C80[param_1] = 0;
}
