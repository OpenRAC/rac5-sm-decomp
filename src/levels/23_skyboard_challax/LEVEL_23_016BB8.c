/* LEVEL_23:0x016BB8 -- placement copy of LEVEL_01_017D80.c: resets all subsystems for a level start. */
extern unsigned D_001C26A8;
extern unsigned D_001FCF70[8];
extern int D_001ED970;
extern char D_001FCD10[];
extern char D_001FCD20[];
extern char D_002025C0[];

extern void func_0234E0(void);
extern void func_173AC0(int a);
extern void func_173A10(void);
extern void SND_StopAllATRAC__Fv(void);
extern void SND_StopSoundsImmediate__Fb(int a);
extern void SND_PauseAtracResetLockId__Fv(void);
extern void func_09E118(int a);
extern void func_013360(void);
extern void func_06BD38(void);
extern void func_0263C0(int a);
extern void func_024D38(void *a, void *b, int c);
extern void func_016F38(void);
extern void func_030E08(void);
extern void func_018F50(void);
extern void func_000BE0(void);
extern void func_002C50(int a);
extern void func_0018A0(int a);
extern void func_001000(int a);
extern void func_011E80(void);
extern void func_08DDC8(void);
extern void func_0964C8(void);
extern void func_08C030(void);
extern void func_0675D8(void);
extern void func_07DCA8(int a);
extern void func_0B23C8(void);
extern void func_0D1D70(void);
extern void func_017600(void);
extern void func_017968(void);
extern void func_029118(void);
extern void func_02FAF8(void);
extern void RENDEREFFECT_Reset__Fv(void);
extern void func_0744D8(void);
extern void func_074630(void);
extern void func_074950(float a);
extern void func_0A69E0(void *a);
extern void func_06EE98(void);
extern void func_06E1C0(void);

void func_016BB8(void)
{
    unsigned i;
    unsigned j;
    char *p;

    func_0234E0();
    func_173AC0(1);
    func_173A10();
    SND_StopAllATRAC__Fv();
    SND_StopSoundsImmediate__Fb(1);
    SND_PauseAtracResetLockId__Fv();
    func_09E118(0);
    D_001C26A8 = 0xFFFFFFFF;
    for (i = 0; i < 8; i++) {
        D_001FCF70[i] = 0xFFFFFFFF;
    }
    func_013360();
    func_06BD38();
    func_0263C0(D_001ED970);
    func_024D38(D_001FCD10, D_001FCD20, 1);
    func_016F38();
    func_030E08();
    func_018F50();
    func_000BE0();
    for (j = 0; j < 2; j++) {
        func_002C50(j);
    }
    func_0018A0(0);
    func_001000(0);
    func_011E80();
    func_08DDC8();
    func_0964C8();
    func_08C030();
    func_0675D8();
    func_07DCA8(2);
    func_0B23C8();
    func_0D1D70();
    func_017600();
    func_017968();
    func_029118();
    func_02FAF8();
    RENDEREFFECT_Reset__Fv();
    func_0744D8();
    func_074630();
    func_074950(1.0f);
    p = D_002025C0;
    func_0A69E0(p + 0x30);
    func_06EE98();
    func_06E1C0();
}
