/* LEVEL_10:0x0B7B90 -- placement copy of LEVEL_01_0B6910.c: resets one slot of seven parallel tables and clears its object. */
extern char D_00205928[];
extern float D_002057F8[];
extern int D_00205800[];
extern int D_00205808[];
extern int D_00205810[];
extern int D_00205818[];
extern int D_002057C0[];
extern int D_00205820[];

void func_0B7A40(void *p);

void func_0B7B90(int param_1)
{
    func_0B7A40(D_00205928 + param_1 * 0x38);
    D_002057F8[param_1] = 1.0f;
    D_00205800[param_1] = 0;
    D_00205808[param_1] = 0;
    D_00205810[param_1] = 100;
    D_00205818[param_1] = 100;
    D_00205820[param_1] = 0xFF09A5D0;
    D_002057C0[param_1] = 0;
}
