/* LEVEL_07:0x0D0DC0 -- placement copy of LEVEL_01_0CED60.c: two lookups, stores one result, calls two helpers, then runs the screen-effect save and disable hooks. */

int func_0A83E0(int a);
void func_0D0E90(void);
void func_136DD8(int a, unsigned char *b, int c);
void RENDEREFFECT_SaveScreenEffectsState__Fv(void);
void RENDEREFFECT_DisableScreenEffects__Fv(void);

extern int D_00217110;
extern unsigned char D_002290B8[];

void func_0D0DC0(void)
{
    int s0;

    s0 = func_0A83E0(0);
    D_00217110 = func_0A83E0(1);
    func_0D0E90();
    func_136DD8(0, D_002290B8, s0);
    RENDEREFFECT_SaveScreenEffectsState__Fv();
    RENDEREFFECT_DisableScreenEffects__Fv();
}
