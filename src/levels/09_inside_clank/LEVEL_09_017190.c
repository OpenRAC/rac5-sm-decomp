/* LEVEL_09:0x017190 -- placement copy of LEVEL_01_017D80.c: resets all subsystems for a level start. */
extern unsigned D_001D90A8;
extern unsigned D_00217270[8];
extern int D_002043F0;
extern char D_00217010[];
extern char D_00217020[];
extern char D_0021C8C0[];

extern void func_024790(void);
extern void func_17C788(int a);
extern void func_17C6D8(void);
extern void SND_StopAllATRAC__Fv(void);
extern void SND_StopSoundsImmediate__Fb(int a);
extern void SND_PauseAtracResetLockId__Fv(void);
extern void func_0A4658(int a);
extern void func_013368(void);
extern void func_06F190(void);
extern void func_027698(int a);
extern void func_025FE8(void *a, void *b, int c);
extern void func_017510(void);
extern void func_0340E0(void);
extern void func_019788(void);
extern void func_000BE0(void);
extern void func_002C50(int a);
extern void func_0018A0(int a);
extern void func_001000(int a);
extern void func_011E88(void);
extern void func_094CF0(void);
extern void func_09CA38(void);
extern void func_092D68(void);
extern void func_06AA30(void);
extern void func_0847A0(int a);
extern void func_0B88E0(void);
extern void func_0D81F0(void);
extern void func_017CB0(void);
extern void func_018018(void);
extern void func_02A410(void);
extern void func_032B28(void);
extern void RENDEREFFECT_Reset__Fv(void);
extern void func_079B58(void);
extern void func_079CB0(void);
extern void func_079FD0(float a);
extern void func_0ACF20(void *a);
extern void func_071CA8(void);
extern void func_070FD0(void);

void func_017190(void)
{
    unsigned i;
    unsigned j;
    char *p;

    func_024790();
    func_17C788(1);
    func_17C6D8();
    SND_StopAllATRAC__Fv();
    SND_StopSoundsImmediate__Fb(1);
    SND_PauseAtracResetLockId__Fv();
    func_0A4658(0);
    D_001D90A8 = 0xFFFFFFFF;
    for (i = 0; i < 8; i++) {
        D_00217270[i] = 0xFFFFFFFF;
    }
    func_013368();
    func_06F190();
    func_027698(D_002043F0);
    func_025FE8(D_00217010, D_00217020, 1);
    func_017510();
    func_0340E0();
    func_019788();
    func_000BE0();
    for (j = 0; j < 2; j++) {
        func_002C50(j);
    }
    func_0018A0(0);
    func_001000(0);
    func_011E88();
    func_094CF0();
    func_09CA38();
    func_092D68();
    func_06AA30();
    func_0847A0(2);
    func_0B88E0();
    func_0D81F0();
    func_017CB0();
    func_018018();
    func_02A410();
    func_032B28();
    RENDEREFFECT_Reset__Fv();
    func_079B58();
    func_079CB0();
    func_079FD0(1.0f);
    p = D_0021C8C0;
    func_0ACF20(p + 0x30);
    func_071CA8();
    func_070FD0();
}
