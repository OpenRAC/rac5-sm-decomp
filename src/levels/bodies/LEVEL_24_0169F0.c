/* LEVEL_24:0x0169F0 -- placement copy of LEVEL_01_017D80.c: resets all subsystems for a level start. */
extern unsigned D_001BFF28;
extern unsigned D_001FB9F0[8];
extern int D_001EB570;
extern char D_001FB790[];
extern char D_001FB7A0[];
extern char D_00201040[];

extern void func_023218(void);
extern void func_16DC08(int a);
extern void func_16DB58(void);
extern void SND_StopAllATRAC__Fv(void);
extern void SND_StopSoundsImmediate__Fb(int a);
extern void SND_PauseAtracResetLockId__Fv(void);
extern void func_0A0C20(int a);
extern void func_012FD0(void);
extern void func_06D208(void);
extern void func_025E18(int a);
extern void func_024910(void *a, void *b, int c);
extern void func_016D70(void);
extern void func_0309D0(void);
extern void func_018A30(void);
extern void func_0009E8(void);
extern void func_002A58(int a);
extern void func_0016A8(int a);
extern void func_000E08(int a);
extern void func_011AF0(void);
extern void func_091398(void);
extern void func_099000(void);
extern void func_08F410(void);
extern void func_067470(void);
extern void func_081088(int a);
extern void func_0B4EC0(void);
extern void func_0D48A8(void);
extern void func_017458(void);
extern void func_0177C0(void);
extern void func_028AE8(void);
extern void func_02F6C0(void);
extern void RENDEREFFECT_Reset__Fv(void);
extern void func_0777B8(void);
extern void func_077910(void);
extern void func_077C30(float a);
extern void func_0A94E8(void *a);
extern void func_06F198(void);
extern void func_06E4C0(void);

void func_0169F0(void)
{
    unsigned i;
    unsigned j;
    char *p;

    func_023218();
    func_16DC08(1);
    func_16DB58();
    SND_StopAllATRAC__Fv();
    SND_StopSoundsImmediate__Fb(1);
    SND_PauseAtracResetLockId__Fv();
    func_0A0C20(0);
    D_001BFF28 = 0xFFFFFFFF;
    for (i = 0; i < 8; i++) {
        D_001FB9F0[i] = 0xFFFFFFFF;
    }
    func_012FD0();
    func_06D208();
    func_025E18(D_001EB570);
    func_024910(D_001FB790, D_001FB7A0, 1);
    func_016D70();
    func_0309D0();
    func_018A30();
    func_0009E8();
    for (j = 0; j < 2; j++) {
        func_002A58(j);
    }
    func_0016A8(0);
    func_000E08(0);
    func_011AF0();
    func_091398();
    func_099000();
    func_08F410();
    func_067470();
    func_081088(2);
    func_0B4EC0();
    func_0D48A8();
    func_017458();
    func_0177C0();
    func_028AE8();
    func_02F6C0();
    RENDEREFFECT_Reset__Fv();
    func_0777B8();
    func_077910();
    func_077C30(1.0f);
    p = D_00201040;
    func_0A94E8(p + 0x30);
    func_06F198();
    func_06E4C0();
}
