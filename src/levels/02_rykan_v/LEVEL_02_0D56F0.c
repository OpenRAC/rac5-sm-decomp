/* LEVEL_02:0x0D56F0 -- placement copy of LEVEL_01_0CED60.c: two lookups, stores one result, calls two helpers, then runs the screen-effect save and disable hooks. */

int func_0ACCF0(int a);
void func_0D57C0(void);
void func_13A188(int a, unsigned char *b, int c);
void RENDEREFFECT_SaveScreenEffectsState__Fv(void);
void RENDEREFFECT_DisableScreenEffects__Fv(void);

extern int D_00217DD0;
extern unsigned char D_00229338[];

void func_0D56F0(void)
{
    int s0;

    s0 = func_0ACCF0(0);
    D_00217DD0 = func_0ACCF0(1);
    func_0D57C0();
    func_13A188(0, D_00229338, s0);
    RENDEREFFECT_SaveScreenEffectsState__Fv();
    RENDEREFFECT_DisableScreenEffects__Fv();
}
