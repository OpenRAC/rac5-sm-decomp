/* LEVEL_09:0x0CC010 -- placement copy of LEVEL_01_0CED60.c: two lookups, stores one result, calls two helpers, then runs the screen-effect save and disable hooks. */

int func_0A3690(int a);
void func_0CC0E0(void);
void func_12CD70(int a, unsigned char *b, int c);
void RENDEREFFECT_SaveScreenEffectsState__Fv(void);
void RENDEREFFECT_DisableScreenEffects__Fv(void);

extern int D_001ECC10;
extern unsigned char D_001FDFB8[];

void func_0CC010(void)
{
    int s0;

    s0 = func_0A3690(0);
    D_001ECC10 = func_0A3690(1);
    func_0CC0E0();
    func_12CD70(0, D_001FDFB8, s0);
    RENDEREFFECT_SaveScreenEffectsState__Fv();
    RENDEREFFECT_DisableScreenEffects__Fv();
}
