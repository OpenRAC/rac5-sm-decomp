/* LEVEL_23:0x0AD6D8 -- placement copy of LEVEL_01_0B6910.c: resets one slot of seven parallel tables and clears its object. */
extern char D_001CFD28[];
extern float D_001CFBF8[];
extern int D_001CFC00[];
extern int D_001CFC08[];
extern int D_001CFC10[];
extern int D_001CFC18[];
extern int D_001CFBC0[];
extern int D_001CFC20[];

void func_0AD588(void *p);

void func_0AD6D8(int param_1)
{
    func_0AD588(D_001CFD28 + param_1 * 0x38);
    D_001CFBF8[param_1] = 1.0f;
    D_001CFC00[param_1] = 0;
    D_001CFC08[param_1] = 0;
    D_001CFC10[param_1] = 100;
    D_001CFC18[param_1] = 100;
    D_001CFC20[param_1] = 0xFF09A5D0;
    D_001CFBC0[param_1] = 0;
}
