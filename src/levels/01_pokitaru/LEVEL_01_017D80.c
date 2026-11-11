/* LEVEL_01:0x017D80 -- resets all subsystems for a level start. */
extern unsigned D_001EF2A8;
extern unsigned D_0022FAF0[8];
extern int D_0021A7F0;
extern char D_0022F890[];
extern char D_0022F8A0[];
extern char D_00235140[];

extern void func_025498(void);
extern void func_18D340(int a);
extern void func_18D290(void);
extern void SND_StopAllATRAC__Fv(void);
extern void SND_StopSoundsImmediate__Fb(int a);
extern void SND_PauseAtracResetLockId__Fv(void);
extern void func_0A73A8(int a);
extern void func_013368(void);
extern void func_072590(void);
extern void func_028808(int a);
extern void func_026FE0(void *a, void *b, int c);
extern void func_018100(void);
extern void func_0378D8(void);
extern void func_01A398(void);
extern void func_000BE0(void);
extern void func_002C50(int a);
extern void func_0018A0(int a);
extern void func_001000(int a);
extern void func_011E88(void);
extern void func_098440(void);
extern void func_09F780(void);
extern void func_096610(void);
extern void func_06DE30(void);
extern void func_087DE8(int a);
extern void func_0BB630(void);
extern void func_0DAF40(void);
extern void func_018848(void);
extern void func_018BB0(void);
extern void func_02B5A8(void);
extern void func_036320(void);
extern void RENDEREFFECT_Reset__Fv(void);
extern void func_07D0D8(void);
extern void func_07D230(void);
extern void func_07D550(float a);
extern void func_0AFC70(void *a);
extern void func_0751A0(void);
extern void func_0744A0(void);

void func_017D80(void)
{
    unsigned i;
    unsigned j;
    char *p;

    func_025498();
    func_18D340(1);
    func_18D290();
    SND_StopAllATRAC__Fv();
    SND_StopSoundsImmediate__Fb(1);
    SND_PauseAtracResetLockId__Fv();
    func_0A73A8(0);
    D_001EF2A8 = 0xFFFFFFFF;
    for (i = 0; i < 8; i++) {
        D_0022FAF0[i] = 0xFFFFFFFF;
    }
    func_013368();
    func_072590();
    func_028808(D_0021A7F0);
    func_026FE0(D_0022F890, D_0022F8A0, 1);
    func_018100();
    func_0378D8();
    func_01A398();
    func_000BE0();
    for (j = 0; j < 2; j++) {
        func_002C50(j);
    }
    func_0018A0(0);
    func_001000(0);
    func_011E88();
    func_098440();
    func_09F780();
    func_096610();
    func_06DE30();
    func_087DE8(2);
    func_0BB630();
    func_0DAF40();
    func_018848();
    func_018BB0();
    func_02B5A8();
    func_036320();
    RENDEREFFECT_Reset__Fv();
    func_07D0D8();
    func_07D230();
    func_07D550(1.0f);
    p = D_00235140;
    func_0AFC70(p + 0x30);
    func_0751A0();
    func_0744A0();
}
