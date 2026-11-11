/* LEVEL_23:0x0C5B98 -- placement copy of LEVEL_01_0CED60.c: two lookups, stores one result, calls two helpers, then runs the screen-effect save and disable hooks. */

int func_09D150(int a);
void func_0C5C68(void);
void func_125550(int a, unsigned char *b, int c);
void RENDEREFFECT_SaveScreenEffectsState__Fv(void);
void RENDEREFFECT_DisableScreenEffects__Fv(void);

extern int D_001D6210;
extern unsigned char D_001E7538[];

void func_0C5B98(void)
{
    int s0;

    s0 = func_09D150(0);
    D_001D6210 = func_09D150(1);
    func_0C5C68();
    func_125550(0, D_001E7538, s0);
    RENDEREFFECT_SaveScreenEffectsState__Fv();
    RENDEREFFECT_DisableScreenEffects__Fv();
}
