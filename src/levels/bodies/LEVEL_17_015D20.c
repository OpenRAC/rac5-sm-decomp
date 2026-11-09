/* LEVEL_17:0x015D20 -- placement copy of LEVEL_01_017D80.c: resets all subsystems for a level start. */
extern unsigned D_0018E330;
extern unsigned D_001CFAF0[8];
extern int D_001C3920;
extern char D_001CF890[];
extern char D_001CF8A0[];
extern char D_001D5390[];

extern void func_022A00(void);
extern void func_1543C0(int a);
extern void func_154310(void);
extern void SND_StopAllATRAC__Fv(void);
extern void SND_StopSoundsImmediate__Fb(int a);
extern void SND_PauseAtracResetLockId__Fv(void);
extern void func_095178(int a);
extern void func_012D50(void);
extern void func_062968(void);
extern void func_025A88(int a);
extern void func_0243F8(void *a, void *b, int c);
extern void func_0160A0(void);
extern void func_0333F0(void);
extern void func_0180F8(void);
extern void func_0006A8(void);
extern void func_002848(int a);
extern void func_001498(int a);
extern void func_000BF0(int a);
extern void func_0118D8(void);
extern void func_0899F0(void);
extern void func_08DF60(void);
extern void func_087C38(void);
extern void func_05E250(void);
extern void func_079DA0(int a);
extern void func_0A9BC0(void);
extern void func_0C9B48(void);
extern void func_016800(void);
extern void func_016B68(void);
extern void func_028970(void);
extern void func_031DE0(void);
extern void RENDEREFFECT_Reset__Fv(void);
extern void func_070788(void);
extern void func_0708E0(void);
extern void func_070C10(float a);
extern void func_09D858(void *a);
extern void func_066898(void);
extern void func_065B48(void);

void func_015D20(void)
{
    unsigned i;
    unsigned j;
    char *p;

    func_022A00();
    func_1543C0(1);
    func_154310();
    SND_StopAllATRAC__Fv();
    SND_StopSoundsImmediate__Fb(1);
    SND_PauseAtracResetLockId__Fv();
    func_095178(0);
    D_0018E330 = 0xFFFFFFFF;
    for (i = 0; i < 8; i++) {
        D_001CFAF0[i] = 0xFFFFFFFF;
    }
    func_012D50();
    func_062968();
    func_025A88(D_001C3920);
    func_0243F8(D_001CF890, D_001CF8A0, 1);
    func_0160A0();
    func_0333F0();
    func_0180F8();
    func_0006A8();
    for (j = 0; j < 2; j++) {
        func_002848(j);
    }
    func_001498(0);
    func_000BF0(0);
    func_0118D8();
    func_0899F0();
    func_08DF60();
    func_087C38();
    func_05E250();
    func_079DA0(2);
    func_0A9BC0();
    func_0C9B48();
    func_016800();
    func_016B68();
    func_028970();
    func_031DE0();
    RENDEREFFECT_Reset__Fv();
    func_070788();
    func_0708E0();
    func_070C10(1.0f);
    p = D_001D5390;
    func_09D858(p + 0x30);
    func_066898();
    func_065B48();
}
