/* LEVEL_10:0x0173E8 -- placement copy of LEVEL_01_017D80.c: resets all subsystems for a level start. */
extern unsigned D_001F82A8;
extern unsigned D_00238EF0[8];
extern int D_00223780;
extern char D_00238C90[];
extern char D_00238CA0[];
extern char D_0023E540[];

extern void func_024E00(void);
extern void func_1906C8(int a);
extern void func_190618(void);
extern void SND_StopAllATRAC__Fv(void);
extern void SND_StopSoundsImmediate__Fb(int a);
extern void SND_PauseAtracResetLockId__Fv(void);
extern void func_0A84C0(int a);
extern void func_013110(void);
extern void func_0717A8(void);
extern void func_028060(int a);
extern void func_0268C0(void *a, void *b, int c);
extern void func_017768(void);
extern void func_036288(void);
extern void func_019A38(void);
extern void func_000970(void);
extern void func_002A00(int a);
extern void func_001650(int a);
extern void func_000D90(int a);
extern void func_011C30(void);
extern void func_098908(void);
extern void func_0A0860(void);
extern void func_096980(void);
extern void func_06D048(void);
extern void func_088150(int a);
extern void func_0BC978(void);
extern void func_0DC380(void);
extern void func_017ED8(void);
extern void func_018240(void);
extern void func_02B380(void);
extern void func_034A78(void);
extern void RENDEREFFECT_Reset__Fv(void);
extern void func_07D708(void);
extern void func_07D860(void);
extern void func_07DB80(float a);
extern void func_0B0D88(void *a);
extern void func_075840(void);
extern void func_074B40(void);

void func_0173E8(void)
{
    unsigned i;
    unsigned j;
    char *p;

    func_024E00();
    func_1906C8(1);
    func_190618();
    SND_StopAllATRAC__Fv();
    SND_StopSoundsImmediate__Fb(1);
    SND_PauseAtracResetLockId__Fv();
    func_0A84C0(0);
    D_001F82A8 = 0xFFFFFFFF;
    for (i = 0; i < 8; i++) {
        D_00238EF0[i] = 0xFFFFFFFF;
    }
    func_013110();
    func_0717A8();
    func_028060(D_00223780);
    func_0268C0(D_00238C90, D_00238CA0, 1);
    func_017768();
    func_036288();
    func_019A38();
    func_000970();
    for (j = 0; j < 2; j++) {
        func_002A00(j);
    }
    func_001650(0);
    func_000D90(0);
    func_011C30();
    func_098908();
    func_0A0860();
    func_096980();
    func_06D048();
    func_088150(2);
    func_0BC978();
    func_0DC380();
    func_017ED8();
    func_018240();
    func_02B380();
    func_034A78();
    RENDEREFFECT_Reset__Fv();
    func_07D708();
    func_07D860();
    func_07DB80(1.0f);
    p = D_0023E540;
    func_0B0D88(p + 0x30);
    func_075840();
    func_074B40();
}
