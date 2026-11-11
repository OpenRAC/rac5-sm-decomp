/* LEVEL_02:0x018710 -- placement copy of LEVEL_01_017D80.c: resets all subsystems for a level start. */
extern unsigned D_00203F28;
extern unsigned D_00246FF0[8];
extern int D_0022F770;
extern char D_00246D90[];
extern char D_00246DA0[];
extern char D_0024C650[];

extern void func_025DF8(void);
extern void func_1A5C68(int a);
extern void func_1A5BB8(void);
extern void SND_StopAllATRAC__Fv(void);
extern void SND_StopSoundsImmediate__Fb(int a);
extern void SND_PauseAtracResetLockId__Fv(void);
extern void func_0ADCB8(int a);
extern void func_013350(void);
extern void func_077A10(void);
extern void func_028FF0(int a);
extern void func_0277C8(void *a, void *b, int c);
extern void func_018A90(void);
extern void func_03C320(void);
extern void func_01ACF8(void);
extern void func_000BE0(void);
extern void func_002C50(int a);
extern void func_0018A0(int a);
extern void func_001000(int a);
extern void func_011E70(void);
extern void func_09EB10(void);
extern void func_0A6070(void);
extern void func_09CCE0(void);
extern void func_0732B0(void);
extern void func_08E718(int a);
extern void func_0C1F40(void);
extern void func_0E18D0(void);
extern void func_0192D0(void);
extern void func_019638(void);
extern void func_02BD70(void);
extern void func_03AD68(void);
extern void RENDEREFFECT_Reset__Fv(void);
extern void func_0839A8(void);
extern void func_083B00(void);
extern void func_083E20(float a);
extern void func_0B6580(void *a);
extern void func_07BA88(void);
extern void func_07AD88(void);

void func_018710(void)
{
    unsigned i;
    unsigned j;
    char *p;

    func_025DF8();
    func_1A5C68(1);
    func_1A5BB8();
    SND_StopAllATRAC__Fv();
    SND_StopSoundsImmediate__Fb(1);
    SND_PauseAtracResetLockId__Fv();
    func_0ADCB8(0);
    D_00203F28 = 0xFFFFFFFF;
    for (i = 0; i < 8; i++) {
        D_00246FF0[i] = 0xFFFFFFFF;
    }
    func_013350();
    func_077A10();
    func_028FF0(D_0022F770);
    func_0277C8(D_00246D90, D_00246DA0, 1);
    func_018A90();
    func_03C320();
    func_01ACF8();
    func_000BE0();
    for (j = 0; j < 2; j++) {
        func_002C50(j);
    }
    func_0018A0(0);
    func_001000(0);
    func_011E70();
    func_09EB10();
    func_0A6070();
    func_09CCE0();
    func_0732B0();
    func_08E718(2);
    func_0C1F40();
    func_0E18D0();
    func_0192D0();
    func_019638();
    func_02BD70();
    func_03AD68();
    RENDEREFFECT_Reset__Fv();
    func_0839A8();
    func_083B00();
    func_083E20(1.0f);
    p = D_0024C650;
    func_0B6580(p + 0x30);
    func_07BA88();
    func_07AD88();
}
