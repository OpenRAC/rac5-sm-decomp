/* LEVEL_18:0x0BD438 -- placement copy of LEVEL_16_0BE460.c: placement copy of LEVEL_01_0CED60.c: two lookups, stores one result, calls two helpers, then runs the screen-effect save and disable hooks. */

int func_0946D0(void);
void func_0BD508(void);
void func_10F7F8(int a, unsigned char *b, int c);
void RENDEREFFECT_SaveScreenEffectsState__Fv(void);
void RENDEREFFECT_DisableScreenEffects__Fv(void);

extern int D_001B2140;
extern unsigned char D_001CA7F8[];

void func_0BD438(void)
{
    int s0;

    s0 = ((int (*)(int))func_0946D0)(0);
    D_001B2140 = ((int (*)(int))func_0946D0)(1);
    func_0BD508();
    func_10F7F8(0, D_001CA7F8, s0);
    RENDEREFFECT_SaveScreenEffectsState__Fv();
    RENDEREFFECT_DisableScreenEffects__Fv();
}
