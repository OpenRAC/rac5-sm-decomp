/* LEVEL_17:0x0BD9A0 -- placement copy of LEVEL_16_0BE460.c: placement copy of LEVEL_01_0CED60.c: two lookups, stores one result, calls two helpers, then runs the screen-effect save and disable hooks. */

int func_094BB8(void);
void func_0BDA70(void);
void func_1100C0(int a, unsigned char *b, int c);
void RENDEREFFECT_SaveScreenEffectsState__Fv(void);
void RENDEREFFECT_DisableScreenEffects__Fv(void);

extern int D_001A42C0;
extern unsigned char D_001BC6F8[];

void func_0BD9A0(void)
{
    int s0;

    s0 = ((int (*)(int))func_094BB8)(0);
    D_001A42C0 = ((int (*)(int))func_094BB8)(1);
    func_0BDA70();
    func_1100C0(0, D_001BC6F8, s0);
    RENDEREFFECT_SaveScreenEffectsState__Fv();
    RENDEREFFECT_DisableScreenEffects__Fv();
}
