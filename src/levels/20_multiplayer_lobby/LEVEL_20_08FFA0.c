/* LEVEL_20:0x08FFA0 -- placement copy of LEVEL_01_0B6910.c: resets one slot of seven parallel tables and clears its object. */
extern char D_0010D088[];
extern float D_0010CF58[];
extern int D_0010CF60[];
extern int D_0010CF68[];
extern int D_0010CF70[];
extern int D_0010CF78[];
extern int D_0010CF20[];
extern int D_0010CF80[];

void func_08FE50(void *p);

void func_08FFA0(int param_1)
{
    func_08FE50(D_0010D088 + param_1 * 0x38);
    D_0010CF58[param_1] = 1.0f;
    D_0010CF60[param_1] = 0;
    D_0010CF68[param_1] = 0;
    D_0010CF70[param_1] = 100;
    D_0010CF78[param_1] = 100;
    D_0010CF80[param_1] = 0xFF09A5D0;
    D_0010CF20[param_1] = 0;
}
