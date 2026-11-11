/* LEVEL_04:0x017A40 -- placement copy of LEVEL_01_017D80.c: resets all subsystems for a level start. */
extern unsigned D_00208428;
extern unsigned D_0024A2F0[8];
extern int D_00234170;
extern char D_0024A090[];
extern char D_0024A0A0[];
extern char D_0024F950[];

extern void func_025118(void);
extern void func_196958(int a);
extern void func_1968A8(void);
extern void SND_StopAllATRAC__Fv(void);
extern void SND_StopSoundsImmediate__Fb(int a);
extern void SND_PauseAtracResetLockId__Fv(void);
extern void func_0AC5B8(int a);
extern void func_013180(void);
extern void func_0757A8(void);
extern void func_0282F8(int a);
extern void func_026C70(void *a, void *b, int c);
extern void func_017DC0(void);
extern void func_038F20(void);
extern void func_01A038(void);
extern void func_0009E8(void);
extern void func_002A58(int a);
extern void func_0016A8(int a);
extern void func_000E08(int a);
extern void func_011CA0(void);
extern void func_09B548(void);
extern void func_0A4998(void);
extern void func_099708(void);
extern void func_06FA10(void);
extern void func_08B080(int a);
extern void func_0C0E10(void);
extern void func_0E0800(void);
extern void func_0185A8(void);
extern void func_018910(void);
extern void func_02B250(void);
extern void func_037968(void);
extern void RENDEREFFECT_Reset__Fv(void);
extern void func_080538(void);
extern void func_080690(void);
extern void func_0809B0(float a);
extern void func_0B4EC0(void *a);
extern void func_077738(void);
extern void func_076A60(void);

void func_017A40(void)
{
    unsigned i;
    unsigned j;
    char *p;

    func_025118();
    func_196958(1);
    func_1968A8();
    SND_StopAllATRAC__Fv();
    SND_StopSoundsImmediate__Fb(1);
    SND_PauseAtracResetLockId__Fv();
    func_0AC5B8(0);
    D_00208428 = 0xFFFFFFFF;
    for (i = 0; i < 8; i++) {
        D_0024A2F0[i] = 0xFFFFFFFF;
    }
    func_013180();
    func_0757A8();
    func_0282F8(D_00234170);
    func_026C70(D_0024A090, D_0024A0A0, 1);
    func_017DC0();
    func_038F20();
    func_01A038();
    func_0009E8();
    for (j = 0; j < 2; j++) {
        func_002A58(j);
    }
    func_0016A8(0);
    func_000E08(0);
    func_011CA0();
    func_09B548();
    func_0A4998();
    func_099708();
    func_06FA10();
    func_08B080(2);
    func_0C0E10();
    func_0E0800();
    func_0185A8();
    func_018910();
    func_02B250();
    func_037968();
    RENDEREFFECT_Reset__Fv();
    func_080538();
    func_080690();
    func_0809B0(1.0f);
    p = D_0024F950;
    func_0B4EC0(p + 0x30);
    func_077738();
    func_076A60();
}
