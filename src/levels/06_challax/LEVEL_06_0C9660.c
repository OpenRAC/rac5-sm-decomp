/* LEVEL_06:0x0C9660 -- placement copy of LEVEL_01_0CED60.c: two lookups, stores one result, calls two helpers, then runs the screen-effect save and disable hooks. */

int func_0A0BB0(int a);
void func_0C9730(void);
void func_12A4A8(int a, unsigned char *b, int c);
void RENDEREFFECT_SaveScreenEffectsState__Fv(void);
void RENDEREFFECT_DisableScreenEffects__Fv(void);

extern int D_001F1D10;
extern unsigned char D_00203238[];

void func_0C9660(void)
{
    int s0;

    s0 = func_0A0BB0(0);
    D_001F1D10 = func_0A0BB0(1);
    func_0C9730();
    func_12A4A8(0, D_00203238, s0);
    RENDEREFFECT_SaveScreenEffectsState__Fv();
    RENDEREFFECT_DisableScreenEffects__Fv();
}
