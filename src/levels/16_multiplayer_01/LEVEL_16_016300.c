/* LEVEL_16:0x016300 -- placement copy of LEVEL_01_017D80.c: resets all subsystems for a level start. */
extern unsigned D_0019AD30;
extern unsigned D_001DE7F0[8];
extern int D_001D04A0;
extern char D_001DE590[];
extern char D_001DE5A0[];
extern char D_001E4090[];

extern void func_023080(void);
extern void func_15A650(int a);
extern void func_15A5A0(void);
extern void SND_StopAllATRAC__Fv(void);
extern void SND_StopSoundsImmediate__Fb(int a);
extern void SND_PauseAtracResetLockId__Fv(void);
extern void func_095C80(int a);
extern void func_012D50(void);
extern void func_062F78(void);
extern void func_026108(int a);
extern void func_024A78(void *a, void *b, int c);
extern void func_016680(void);
extern void func_033AA8(void);
extern void func_018778(void);
extern void func_0006A8(void);
extern void func_002848(int a);
extern void func_001498(int a);
extern void func_000BF0(int a);
extern void func_0118D8(void);
extern void func_088FB0(void);
extern void func_08EA68(void);
extern void func_0871F8(void);
extern void func_05E820(void);
extern void func_079328(int a);
extern void func_0AA680(void);
extern void func_0CA608(void);
extern void func_016DE0(void);
extern void func_017148(void);
extern void func_028FF0(void);
extern void func_032498(void);
extern void RENDEREFFECT_Reset__Fv(void);
extern void func_070058(void);
extern void func_0701B0(void);
extern void func_0704E0(float a);
extern void func_09E360(void *a);
extern void func_0660D8(void);
extern void func_065388(void);

void func_016300(void)
{
    unsigned i;
    unsigned j;
    char *p;

    func_023080();
    func_15A650(1);
    func_15A5A0();
    SND_StopAllATRAC__Fv();
    SND_StopSoundsImmediate__Fb(1);
    SND_PauseAtracResetLockId__Fv();
    func_095C80(0);
    D_0019AD30 = 0xFFFFFFFF;
    for (i = 0; i < 8; i++) {
        D_001DE7F0[i] = 0xFFFFFFFF;
    }
    func_012D50();
    func_062F78();
    func_026108(D_001D04A0);
    func_024A78(D_001DE590, D_001DE5A0, 1);
    func_016680();
    func_033AA8();
    func_018778();
    func_0006A8();
    for (j = 0; j < 2; j++) {
        func_002848(j);
    }
    func_001498(0);
    func_000BF0(0);
    func_0118D8();
    func_088FB0();
    func_08EA68();
    func_0871F8();
    func_05E820();
    func_079328(2);
    func_0AA680();
    func_0CA608();
    func_016DE0();
    func_017148();
    func_028FF0();
    func_032498();
    RENDEREFFECT_Reset__Fv();
    func_070058();
    func_0701B0();
    func_0704E0(1.0f);
    p = D_001E4090;
    func_09E360(p + 0x30);
    func_0660D8();
    func_065388();
}
