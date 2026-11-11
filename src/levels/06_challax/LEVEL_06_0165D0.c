/* LEVEL_06:0x0165D0 -- placement copy of LEVEL_01_017D80.c: resets all subsystems for a level start. */
extern unsigned D_001DE1A8;
extern unsigned D_0021C870[8];
extern int D_00209670;
extern char D_0021C610[];
extern char D_0021C620[];
extern char D_00221EC0[];

extern void func_023BA0(void);
extern void func_17BE00(int a);
extern void func_17BD50(void);
extern void SND_StopAllATRAC__Fv(void);
extern void SND_StopSoundsImmediate__Fb(int a);
extern void SND_PauseAtracResetLockId__Fv(void);
extern void func_0A1B78(int a);
extern void func_013350(void);
extern void func_06F350(void);
extern void func_026C40(int a);
extern void func_025490(void *a, void *b, int c);
extern void func_016950(void);
extern void func_034328(void);
extern void func_018B98(void);
extern void func_000BE0(void);
extern void func_002C50(int a);
extern void func_0018A0(int a);
extern void func_001000(int a);
extern void func_011E70(void);
extern void func_091150(void);
extern void func_099F58(void);
extern void func_08F260(void);
extern void func_06ABF0(void);
extern void func_080C60(int a);
extern void func_0B5F30(void);
extern void func_0D5840(void);
extern void func_0170F0(void);
extern void func_017458(void);
extern void func_029990(void);
extern void func_032D70(void);
extern void RENDEREFFECT_Reset__Fv(void);
extern void func_076CB8(void);
extern void func_076E10(void);
extern void func_077130(float a);
extern void func_0AA440(void *a);
extern void func_071048(void);
extern void func_070370(void);

void func_0165D0(void)
{
    unsigned i;
    unsigned j;
    char *p;

    func_023BA0();
    func_17BE00(1);
    func_17BD50();
    SND_StopAllATRAC__Fv();
    SND_StopSoundsImmediate__Fb(1);
    SND_PauseAtracResetLockId__Fv();
    func_0A1B78(0);
    D_001DE1A8 = 0xFFFFFFFF;
    for (i = 0; i < 8; i++) {
        D_0021C870[i] = 0xFFFFFFFF;
    }
    func_013350();
    func_06F350();
    func_026C40(D_00209670);
    func_025490(D_0021C610, D_0021C620, 1);
    func_016950();
    func_034328();
    func_018B98();
    func_000BE0();
    for (j = 0; j < 2; j++) {
        func_002C50(j);
    }
    func_0018A0(0);
    func_001000(0);
    func_011E70();
    func_091150();
    func_099F58();
    func_08F260();
    func_06ABF0();
    func_080C60(2);
    func_0B5F30();
    func_0D5840();
    func_0170F0();
    func_017458();
    func_029990();
    func_032D70();
    RENDEREFFECT_Reset__Fv();
    func_076CB8();
    func_076E10();
    func_077130(1.0f);
    p = D_00221EC0;
    func_0AA440(p + 0x30);
    func_071048();
    func_070370();
}
