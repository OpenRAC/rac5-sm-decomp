/* LEVEL_19:0x0A5298 -- placement copy of LEVEL_01_0B6910.c: resets one slot of seven parallel tables and clears its object. */
extern char D_001ABB28[];
extern float D_001AB9F8[];
extern int D_001ABA00[];
extern int D_001ABA08[];
extern int D_001ABA10[];
extern int D_001ABA18[];
extern int D_001AB9C0[];
extern int D_001ABA20[];

void func_0A5148(void *p);

void func_0A5298(int param_1)
{
    func_0A5148(D_001ABB28 + param_1 * 0x38);
    D_001AB9F8[param_1] = 1.0f;
    D_001ABA00[param_1] = 0;
    D_001ABA08[param_1] = 0;
    D_001ABA10[param_1] = 100;
    D_001ABA18[param_1] = 100;
    D_001ABA20[param_1] = 0xFF09A5D0;
    D_001AB9C0[param_1] = 0;
}
