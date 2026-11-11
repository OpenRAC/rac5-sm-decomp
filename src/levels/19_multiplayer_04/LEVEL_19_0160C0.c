/* LEVEL_19:0x0160C0 -- placement copy of LEVEL_01_017D80.c: resets all subsystems for a level start. */
extern unsigned D_0019BEB0;
extern unsigned D_001DE970[8];
extern int D_001D16A0;
extern char D_001DE710[];
extern char D_001DE720[];
extern char D_001E4210[];

extern void func_022CC0(void);
extern void func_1538B0(int a);
extern void func_153800(void);
extern void SND_StopAllATRAC__Fv(void);
extern void SND_StopSoundsImmediate__Fb(int a);
extern void SND_PauseAtracResetLockId__Fv(void);
extern void func_095510(int a);
extern void func_012D50(void);
extern void func_062398(void);
extern void func_025CB0(int a);
extern void func_024620(void *a, void *b, int c);
extern void func_016440(void);
extern void func_032E38(void);
extern void func_018478(void);
extern void func_0006A8(void);
extern void func_002848(int a);
extern void func_001498(int a);
extern void func_000BF0(int a);
extern void func_0118D8(void);
extern void func_089460(void);
extern void func_08E300(void);
extern void func_0876A8(void);
extern void func_05DC80(void);
extern void func_079810(int a);
extern void func_0A9F58(void);
extern void func_0C9EE0(void);
extern void func_016B50(void);
extern void func_016EB8(void);
extern void func_028D98(void);
extern void func_031828(void);
extern void RENDEREFFECT_Reset__Fv(void);
extern void func_0701A0(void);
extern void func_0702F8(void);
extern void func_070628(float a);
extern void func_09DBF0(void *a);
extern void func_0662C8(void);
extern void func_065578(void);

void func_0160C0(void)
{
    unsigned i;
    unsigned j;
    char *p;

    func_022CC0();
    func_1538B0(1);
    func_153800();
    SND_StopAllATRAC__Fv();
    SND_StopSoundsImmediate__Fb(1);
    SND_PauseAtracResetLockId__Fv();
    func_095510(0);
    D_0019BEB0 = 0xFFFFFFFF;
    for (i = 0; i < 8; i++) {
        D_001DE970[i] = 0xFFFFFFFF;
    }
    func_012D50();
    func_062398();
    func_025CB0(D_001D16A0);
    func_024620(D_001DE710, D_001DE720, 1);
    func_016440();
    func_032E38();
    func_018478();
    func_0006A8();
    for (j = 0; j < 2; j++) {
        func_002848(j);
    }
    func_001498(0);
    func_000BF0(0);
    func_0118D8();
    func_089460();
    func_08E300();
    func_0876A8();
    func_05DC80();
    func_079810(2);
    func_0A9F58();
    func_0C9EE0();
    func_016B50();
    func_016EB8();
    func_028D98();
    func_031828();
    RENDEREFFECT_Reset__Fv();
    func_0701A0();
    func_0702F8();
    func_070628(1.0f);
    p = D_001E4210;
    func_09DBF0(p + 0x30);
    func_0662C8();
    func_065578();
}
