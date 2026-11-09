/* LEVEL_01:0x0CED60 -- two lookups, stores one result, calls two helpers, then runs the screen-effect save and disable hooks. */

int func_0A63E0(int a);
void func_0CEE30(void);
void func_133DD8(int a, unsigned char *b, int c);
void RENDEREFFECT_SaveScreenEffectsState__Fv(void);
void RENDEREFFECT_DisableScreenEffects__Fv(void);

extern int D_00202E10;
extern unsigned char D_002143B8[];

void func_0CED60(void)
{
    int s0;

    s0 = func_0A63E0(0);
    D_00202E10 = func_0A63E0(1);
    func_0CEE30();
    func_133DD8(0, D_002143B8, s0);
    RENDEREFFECT_SaveScreenEffectsState__Fv();
    RENDEREFFECT_DisableScreenEffects__Fv();
}
