/* LEVEL_07:0x0B8970 -- placement copy of LEVEL_01_0B6910.c: resets one slot of seven parallel tables and clears its object. */
extern char D_00210C28[];
extern float D_00210AF8[];
extern int D_00210B00[];
extern int D_00210B08[];
extern int D_00210B10[];
extern int D_00210B18[];
extern int D_00210AC0[];
extern int D_00210B20[];

void func_0B8820(void *p);

void func_0B8970(int param_1)
{
    func_0B8820(D_00210C28 + param_1 * 0x38);
    D_00210AF8[param_1] = 1.0f;
    D_00210B00[param_1] = 0;
    D_00210B08[param_1] = 0;
    D_00210B10[param_1] = 100;
    D_00210B18[param_1] = 100;
    D_00210B20[param_1] = 0xFF09A5D0;
    D_00210AC0[param_1] = 0;
}
