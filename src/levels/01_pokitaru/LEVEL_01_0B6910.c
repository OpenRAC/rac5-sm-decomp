/* LEVEL_01:0x0B6910 -- resets one slot of seven parallel tables and clears its object. */
extern char D_001FC928[];
extern float D_001FC7F8[];
extern int D_001FC800[];
extern int D_001FC808[];
extern int D_001FC810[];
extern int D_001FC818[];
extern int D_001FC7C0[];
extern int D_001FC820[];

void func_0B67C0(void *p);

void func_0B6910(int param_1)
{
    func_0B67C0(D_001FC928 + param_1 * 0x38);
    D_001FC7F8[param_1] = 1.0f;
    D_001FC800[param_1] = 0;
    D_001FC808[param_1] = 0;
    D_001FC810[param_1] = 100;
    D_001FC818[param_1] = 100;
    D_001FC820[param_1] = 0xFF09A5D0;
    D_001FC7C0[param_1] = 0;
}
