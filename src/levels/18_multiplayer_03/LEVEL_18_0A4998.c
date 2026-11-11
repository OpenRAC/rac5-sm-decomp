/* LEVEL_18:0x0A4998 -- placement copy of LEVEL_01_0B6910.c: resets one slot of seven parallel tables and clears its object. */
extern char D_001ABE28[];
extern float D_001ABCF8[];
extern int D_001ABD00[];
extern int D_001ABD08[];
extern int D_001ABD10[];
extern int D_001ABD18[];
extern int D_001ABCC0[];
extern int D_001ABD20[];

void func_0A4848(void *p);

void func_0A4998(int param_1)
{
    func_0A4848(D_001ABE28 + param_1 * 0x38);
    D_001ABCF8[param_1] = 1.0f;
    D_001ABD00[param_1] = 0;
    D_001ABD08[param_1] = 0;
    D_001ABD10[param_1] = 100;
    D_001ABD18[param_1] = 100;
    D_001ABD20[param_1] = 0xFF09A5D0;
    D_001ABCC0[param_1] = 0;
}
