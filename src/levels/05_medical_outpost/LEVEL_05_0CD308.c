/* LEVEL_05:0x0CD308 -- placement copy of LEVEL_01_0CED60.c: two lookups, stores one result, calls two helpers, then runs the screen-effect save and disable hooks. */

int func_0A49A0(int a);
void func_0CD3D8(void);
void func_12F750(int a, unsigned char *b, int c);
void RENDEREFFECT_SaveScreenEffectsState__Fv(void);
void RENDEREFFECT_DisableScreenEffects__Fv(void);

extern int D_001F2190;
extern unsigned char D_002032B8[];

void func_0CD308(void)
{
    int s0;

    s0 = func_0A49A0(0);
    D_001F2190 = func_0A49A0(1);
    func_0CD3D8();
    func_12F750(0, D_002032B8, s0);
    RENDEREFFECT_SaveScreenEffectsState__Fv();
    RENDEREFFECT_DisableScreenEffects__Fv();
}
