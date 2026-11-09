/* LEVEL_08:0x0D9D08 -- placement copy of LEVEL_01_0CED60.c: two lookups, stores one result, calls two helpers, then runs the screen-effect save and disable hooks. */

int func_0B0CD8(int a);
void func_0D9DD8(void);
void func_145310(int a, unsigned char *b, int c);
void RENDEREFFECT_SaveScreenEffectsState__Fv(void);
void RENDEREFFECT_DisableScreenEffects__Fv(void);

extern int D_0024BCD0;
extern unsigned char D_0025E038[];

void func_0D9D08(void)
{
    int s0;

    s0 = func_0B0CD8(0);
    D_0024BCD0 = func_0B0CD8(1);
    func_0D9DD8();
    func_145310(0, D_0025E038, s0);
    RENDEREFFECT_SaveScreenEffectsState__Fv();
    RENDEREFFECT_DisableScreenEffects__Fv();
}
