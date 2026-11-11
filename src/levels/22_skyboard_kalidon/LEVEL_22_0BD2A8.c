/* LEVEL_22:0x0BD2A8 -- placement copy of LEVEL_01_0CED60.c: two lookups, stores one result, calls two helpers, then runs the screen-effect save and disable hooks. */

int func_0949F0(int a);
void func_0BD378(void);
void func_10B2A8(int a, unsigned char *b, int c);
void RENDEREFFECT_SaveScreenEffectsState__Fv(void);
void RENDEREFFECT_DisableScreenEffects__Fv(void);

extern int D_00162190;
extern unsigned char D_00171838[];

void func_0BD2A8(void)
{
    int s0;

    s0 = func_0949F0(0);
    D_00162190 = func_0949F0(1);
    func_0BD378();
    func_10B2A8(0, D_00171838, s0);
    RENDEREFFECT_SaveScreenEffectsState__Fv();
    RENDEREFFECT_DisableScreenEffects__Fv();
}
