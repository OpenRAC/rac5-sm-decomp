/* LEVEL_22:0x014A70 -- placement copy of LEVEL_01_017D80.c: resets all subsystems for a level start. */
extern unsigned D_0014E628;
extern unsigned D_001816F0[8];
extern int D_00177C70;
extern char D_00181490[];
extern char D_001814A0[];
extern char D_00186D40[];

extern void func_020278(void);
extern void func_12B298(int a);
extern void func_12B1E8(void);
extern void SND_StopAllATRAC__Fv(void);
extern void SND_StopSoundsImmediate__Fb(int a);
extern void SND_PauseAtracResetLockId__Fv(void);
extern void func_0959B8(int a);
extern void func_012C20(void);
extern void func_0678A8(void);
extern void func_022E78(int a);
extern void func_021970(void *a, void *b, int c);
extern void func_014DF0(void);
extern void func_02D828(void);
extern void func_016A58(void);
extern void func_0009E8(void);
extern void func_0029C0(int a);
extern void func_001610(int a);
extern void func_000E08(int a);
extern void func_011A18(void);
extern void func_089100(void);
extern void func_08DE30(void);
extern void func_0873E0(void);
extern void func_063148(void);
extern void func_079200(int a);
extern void func_0A9AD8(void);
extern void func_0C9480(void);
extern void func_015488(void);
extern void func_0157F0(void);
extern void func_025B40(void);
extern void func_02C518(void);
extern void RENDEREFFECT_Reset__Fv(void);
extern void func_06FAB0(void);
extern void func_06FC08(void);
extern void func_06FF28(float a);
extern void func_09E280(void *a);
extern void func_06AA08(void);
extern void func_069D30(void);

void func_014A70(void)
{
    unsigned i;
    unsigned j;
    char *p;

    func_020278();
    func_12B298(1);
    func_12B1E8();
    SND_StopAllATRAC__Fv();
    SND_StopSoundsImmediate__Fb(1);
    SND_PauseAtracResetLockId__Fv();
    func_0959B8(0);
    D_0014E628 = 0xFFFFFFFF;
    for (i = 0; i < 8; i++) {
        D_001816F0[i] = 0xFFFFFFFF;
    }
    func_012C20();
    func_0678A8();
    func_022E78(D_00177C70);
    func_021970(D_00181490, D_001814A0, 1);
    func_014DF0();
    func_02D828();
    func_016A58();
    func_0009E8();
    for (j = 0; j < 2; j++) {
        func_0029C0(j);
    }
    func_001610(0);
    func_000E08(0);
    func_011A18();
    func_089100();
    func_08DE30();
    func_0873E0();
    func_063148();
    func_079200(2);
    func_0A9AD8();
    func_0C9480();
    func_015488();
    func_0157F0();
    func_025B40();
    func_02C518();
    RENDEREFFECT_Reset__Fv();
    func_06FAB0();
    func_06FC08();
    func_06FF28(1.0f);
    p = D_00186D40;
    func_09E280(p + 0x30);
    func_06AA08();
    func_069D30();
}
