/* LEVEL_24:0x0C86A8 -- placement copy of LEVEL_01_0CED60.c: two lookups, stores one result, calls two helpers, then runs the screen-effect save and disable hooks. */

int func_09FC58(int a);
void func_0C8778(void);
void func_1298D8(int a, unsigned char *b, int c);
void RENDEREFFECT_SaveScreenEffectsState__Fv(void);
void RENDEREFFECT_DisableScreenEffects__Fv(void);

extern int D_001D3A90;
extern unsigned char D_001E5138[];

void func_0C86A8(void)
{
    int s0;

    s0 = func_09FC58(0);
    D_001D3A90 = func_09FC58(1);
    func_0C8778();
    func_1298D8(0, D_001E5138, s0);
    RENDEREFFECT_SaveScreenEffectsState__Fv();
    RENDEREFFECT_DisableScreenEffects__Fv();
}
