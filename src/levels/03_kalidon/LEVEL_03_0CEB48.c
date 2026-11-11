/* LEVEL_03:0x0CEB48 -- placement copy of LEVEL_01_0CED60.c: two lookups, stores one result, calls two helpers, then runs the screen-effect save and disable hooks. */

int func_0A6160(int a);
void func_0CEC18(void);
void func_1321A0(int a, unsigned char *b, int c);
void RENDEREFFECT_SaveScreenEffectsState__Fv(void);
void RENDEREFFECT_DisableScreenEffects__Fv(void);

extern int D_0021B490;
extern unsigned char D_0022D2B8[];

void func_0CEB48(void)
{
    int s0;

    s0 = func_0A6160(0);
    D_0021B490 = func_0A6160(1);
    func_0CEC18();
    func_1321A0(0, D_0022D2B8, s0);
    RENDEREFFECT_SaveScreenEffectsState__Fv();
    RENDEREFFECT_DisableScreenEffects__Fv();
}
