/* LEVEL_15:0x0AF3A8 -- placement copy of LEVEL_01_0CED60.c: two lookups, stores one result, calls two helpers, then runs the screen-effect save and disable hooks. */

int func_086CA8(int a);
void func_0AF478(void);
void func_0F2CA0(int a, unsigned char *b, int c);
void RENDEREFFECT_SaveScreenEffectsState__Fv(void);
void RENDEREFFECT_DisableScreenEffects__Fv(void);

extern int D_00157A90;
extern unsigned char D_00168B38[];

void func_0AF3A8(void)
{
    int s0;

    s0 = func_086CA8(0);
    D_00157A90 = func_086CA8(1);
    func_0AF478();
    func_0F2CA0(0, D_00168B38, s0);
    RENDEREFFECT_SaveScreenEffectsState__Fv();
    RENDEREFFECT_DisableScreenEffects__Fv();
}
