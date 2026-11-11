/* LEVEL_04:0x0D45F8 -- placement copy of LEVEL_01_0CED60.c: two lookups, stores one result, calls two helpers, then runs the screen-effect save and disable hooks. */

int func_0AB5F0(int a);
void func_0D46C8(void);
void func_140258(int a, unsigned char *b, int c);
void RENDEREFFECT_SaveScreenEffectsState__Fv(void);
void RENDEREFFECT_DisableScreenEffects__Fv(void);

extern int D_0021C2D0;
extern unsigned char D_0022DD38[];

void func_0D45F8(void)
{
    int s0;

    s0 = func_0AB5F0(0);
    D_0021C2D0 = func_0AB5F0(1);
    func_0D46C8();
    func_140258(0, D_0022DD38, s0);
    RENDEREFFECT_SaveScreenEffectsState__Fv();
    RENDEREFFECT_DisableScreenEffects__Fv();
}
