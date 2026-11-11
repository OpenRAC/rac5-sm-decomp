/* LEVEL_05:0x017418 -- placement copy of LEVEL_01_017D80.c: resets all subsystems for a level start. */
extern unsigned D_001DE628;
extern unsigned D_0021B7F0[8];
extern int D_002096F0;
extern char D_0021B590[];
extern char D_0021B5A0[];
extern char D_00220E40[];

extern void func_024430(void);
extern void func_17B7D0(int a);
extern void func_17B720(void);
extern void SND_StopAllATRAC__Fv(void);
extern void SND_StopSoundsImmediate__Fb(int a);
extern void SND_PauseAtracResetLockId__Fv(void);
extern void func_0A5968(int a);
extern void func_013368(void);
extern void func_0701F8(void);
extern void func_0274A8(int a);
extern void func_025D20(void *a, void *b, int c);
extern void func_017798(void);
extern void func_0355E8(void);
extern void func_019930(void);
extern void func_000BE0(void);
extern void func_002C50(int a);
extern void func_0018A0(int a);
extern void func_001000(int a);
extern void func_011E88(void);
extern void func_095AA0(void);
extern void func_09DD38(void);
extern void func_093D08(void);
extern void func_06BA98(void);
extern void func_085740(int a);
extern void func_0B9BD8(void);
extern void func_0D94E8(void);
extern void func_017F10(void);
extern void func_018278(void);
extern void func_02A220(void);
extern void func_034030(void);
extern void RENDEREFFECT_Reset__Fv(void);
extern void func_07A778(void);
extern void func_07A8D0(void);
extern void func_07ABF0(float a);
extern void func_0AE230(void *a);
extern void func_0741D8(void);
extern void func_0734D8(void);

void func_017418(void)
{
    unsigned i;
    unsigned j;
    char *p;

    func_024430();
    func_17B7D0(1);
    func_17B720();
    SND_StopAllATRAC__Fv();
    SND_StopSoundsImmediate__Fb(1);
    SND_PauseAtracResetLockId__Fv();
    func_0A5968(0);
    D_001DE628 = 0xFFFFFFFF;
    for (i = 0; i < 8; i++) {
        D_0021B7F0[i] = 0xFFFFFFFF;
    }
    func_013368();
    func_0701F8();
    func_0274A8(D_002096F0);
    func_025D20(D_0021B590, D_0021B5A0, 1);
    func_017798();
    func_0355E8();
    func_019930();
    func_000BE0();
    for (j = 0; j < 2; j++) {
        func_002C50(j);
    }
    func_0018A0(0);
    func_001000(0);
    func_011E88();
    func_095AA0();
    func_09DD38();
    func_093D08();
    func_06BA98();
    func_085740(2);
    func_0B9BD8();
    func_0D94E8();
    func_017F10();
    func_018278();
    func_02A220();
    func_034030();
    RENDEREFFECT_Reset__Fv();
    func_07A778();
    func_07A8D0();
    func_07ABF0(1.0f);
    p = D_00220E40;
    func_0AE230(p + 0x30);
    func_0741D8();
    func_0734D8();
}
