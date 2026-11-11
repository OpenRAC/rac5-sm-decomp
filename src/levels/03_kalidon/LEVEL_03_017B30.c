/* LEVEL_03:0x017B30 -- placement copy of LEVEL_01_017D80.c: resets all subsystems for a level start. */
extern unsigned D_00207928;
extern unsigned D_0024A970[8];
extern int D_002336F0;
extern char D_0024A710[];
extern char D_0024A720[];
extern char D_0024FFC0[];

extern void func_025368(void);
extern void func_1892E8(int a);
extern void func_189238(void);
extern void SND_StopAllATRAC__Fv(void);
extern void SND_StopSoundsImmediate__Fb(int a);
extern void SND_PauseAtracResetLockId__Fv(void);
extern void func_0A7128(int a);
extern void func_013388(void);
extern void func_070F18(void);
extern void func_028620(int a);
extern void func_026EC0(void *a, void *b, int c);
extern void func_017EB0(void);
extern void func_035B18(void);
extern void func_01A120(void);
extern void func_000BE0(void);
extern void func_002C78(int a);
extern void func_0018C8(int a);
extern void func_001000(int a);
extern void func_011EA8(void);
extern void func_0981C8(void);
extern void func_09F508(void);
extern void func_096240(void);
extern void func_06C7B8(void);
extern void func_087C40(int a);
extern void func_0BB418(void);
extern void func_0DAD28(void);
extern void func_018650(void);
extern void func_0189B8(void);
extern void func_02B3A0(void);
extern void func_034560(void);
extern void RENDEREFFECT_Reset__Fv(void);
extern void func_07CEB8(void);
extern void func_07D010(void);
extern void func_07D330(float a);
extern void func_0AF9F0(void *a);
extern void func_074F90(void);
extern void func_074290(void);

void func_017B30(void)
{
    unsigned i;
    unsigned j;
    char *p;

    func_025368();
    func_1892E8(1);
    func_189238();
    SND_StopAllATRAC__Fv();
    SND_StopSoundsImmediate__Fb(1);
    SND_PauseAtracResetLockId__Fv();
    func_0A7128(0);
    D_00207928 = 0xFFFFFFFF;
    for (i = 0; i < 8; i++) {
        D_0024A970[i] = 0xFFFFFFFF;
    }
    func_013388();
    func_070F18();
    func_028620(D_002336F0);
    func_026EC0(D_0024A710, D_0024A720, 1);
    func_017EB0();
    func_035B18();
    func_01A120();
    func_000BE0();
    for (j = 0; j < 2; j++) {
        func_002C78(j);
    }
    func_0018C8(0);
    func_001000(0);
    func_011EA8();
    func_0981C8();
    func_09F508();
    func_096240();
    func_06C7B8();
    func_087C40(2);
    func_0BB418();
    func_0DAD28();
    func_018650();
    func_0189B8();
    func_02B3A0();
    func_034560();
    RENDEREFFECT_Reset__Fv();
    func_07CEB8();
    func_07D010();
    func_07D330(1.0f);
    p = D_0024FFC0;
    func_0AF9F0(p + 0x30);
    func_074F90();
    func_074290();
}
