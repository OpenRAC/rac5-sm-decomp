/* LEVEL_16:0x0BE460 -- placement copy of LEVEL_01_0CED60.c: two lookups, stores one result, calls two helpers, then runs the screen-effect save and disable hooks. */

int func_0956C0(void);
void func_0BE530(void);
void func_110B48(int a, unsigned char *b, int c);
void RENDEREFFECT_SaveScreenEffectsState__Fv(void);
void RENDEREFFECT_DisableScreenEffects__Fv(void);

extern int D_001B0CC0;
extern unsigned char D_001C9278[];

void func_0BE460(void)
{
    int s0;

    s0 = ((int (*)(int))func_0956C0)(0);
    D_001B0CC0 = ((int (*)(int))func_0956C0)(1);
    func_0BE530();
    func_110B48(0, D_001C9278, s0);
    RENDEREFFECT_SaveScreenEffectsState__Fv();
    RENDEREFFECT_DisableScreenEffects__Fv();
}
