/* LEVEL_20:0x0A8990 -- placement copy of LEVEL_16_0BE460.c: placement copy of LEVEL_01_0CED60.c: two lookups, stores one result, calls two helpers, then runs the screen-effect save and disable hooks. */

int func_07FDB8(void);
void func_0A8A60(void);
void func_0E3930(int a, unsigned char *b, int c);
void RENDEREFFECT_SaveScreenEffectsState__Fv(void);
void RENDEREFFECT_DisableScreenEffects__Fv(void);

extern int D_001133A0;
extern unsigned char D_0012A2F8[];

void func_0A8990(void)
{
    int s0;

    s0 = ((int (*)(int))func_07FDB8)(0);
    D_001133A0 = ((int (*)(int))func_07FDB8)(1);
    func_0A8A60();
    func_0E3930(0, D_0012A2F8, s0);
    RENDEREFFECT_SaveScreenEffectsState__Fv();
    RENDEREFFECT_DisableScreenEffects__Fv();
}
