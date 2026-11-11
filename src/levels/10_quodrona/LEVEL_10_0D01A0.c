/* LEVEL_10:0x0D01A0 -- placement copy of LEVEL_01_0CED60.c: two lookups, stores one result, calls two helpers, then runs the screen-effect save and disable hooks. */

int func_0A74F8(int a);
void func_0D0270(void);
void func_131C58(int a, unsigned char *b, int c);
void RENDEREFFECT_SaveScreenEffectsState__Fv(void);
void RENDEREFFECT_DisableScreenEffects__Fv(void);

extern int D_0020BE10;
extern unsigned char D_0021D338[];

void func_0D01A0(void)
{
    int s0;

    s0 = func_0A74F8(0);
    D_0020BE10 = func_0A74F8(1);
    func_0D0270();
    func_131C58(0, D_0021D338, s0);
    RENDEREFFECT_SaveScreenEffectsState__Fv();
    RENDEREFFECT_DisableScreenEffects__Fv();
}
