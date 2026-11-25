/* LEVEL_19:0x0BDD38 -- placement copy of LEVEL_16_0BE460.c: placement copy of LEVEL_01_0CED60.c: two lookups, stores one result, calls two helpers, then runs the screen-effect save and disable hooks. */

int func_094F50(void);
void func_0BDE08(void);
void func_1111E8(int a, unsigned char *b, int c);
void RENDEREFFECT_SaveScreenEffectsState__Fv(void);
void RENDEREFFECT_DisableScreenEffects__Fv(void);

extern int D_001B1E40;
extern unsigned char D_001CA478[];

void func_0BDD38(void)
{
    int s0;

    s0 = ((int (*)(int))func_094F50)(0);
    D_001B1E40 = ((int (*)(int))func_094F50)(1);
    func_0BDE08();
    func_1111E8(0, D_001CA478, s0);
    RENDEREFFECT_SaveScreenEffectsState__Fv();
    RENDEREFFECT_DisableScreenEffects__Fv();
}
