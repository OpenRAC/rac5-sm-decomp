/* LEVEL_15:0x014640 -- placement copy of LEVEL_01_017D80.c: resets all subsystems for a level start. */
extern unsigned D_00143F10;
extern unsigned D_00177C70[8];
extern int D_0016EF70;
extern char D_00177A10[];
extern char D_00177A20[];
extern char D_0017D2C0[];

extern void func_01F7A8(void);
extern void func_13AA78(int a);
extern void func_13A9C8(void);
extern void SND_StopAllATRAC__Fv(void);
extern void SND_StopSoundsImmediate__Fb(int a);
extern void SND_PauseAtracResetLockId__Fv(void);
extern void func_087C70(int a);
extern void func_0129F8(void);
extern void func_05C530(void);
extern void func_022498(int a);
extern void func_020FD0(void *a, void *b, int c);
extern void func_0149C0(void);
extern void func_02D010(void);
extern void func_016628(void);
extern void func_000738(void);
extern void func_0027A8(int a);
extern void func_0013F8(int a);
extern void func_000B58(int a);
extern void func_011840(void);
extern void func_07C3D8(void);
extern void func_0800F0(void);
extern void func_07A4D0(void);
extern void func_05C430(void);
extern void func_06C4C8(int a);
extern void func_09BC78(void);
extern void func_0BB580(void);
extern void func_015060(void);
extern void func_0153C8(void);
extern void func_024D20(void);
extern void func_02BD00(void);
extern void RENDEREFFECT_Reset__Fv(void);
extern void func_061D80(void);
extern void func_061ED8(void);
extern void func_0621F8(float a);
extern void func_090538(void *a);
extern void func_05D668(void);
extern void func_05CAF8(void);

void func_014640(void)
{
    unsigned i;
    unsigned j;
    char *p;

    func_01F7A8();
    func_13AA78(1);
    func_13A9C8();
    SND_StopAllATRAC__Fv();
    SND_StopSoundsImmediate__Fb(1);
    SND_PauseAtracResetLockId__Fv();
    func_087C70(0);
    D_00143F10 = 0xFFFFFFFF;
    for (i = 0; i < 8; i++) {
        D_00177C70[i] = 0xFFFFFFFF;
    }
    func_0129F8();
    func_05C530();
    func_022498(D_0016EF70);
    func_020FD0(D_00177A10, D_00177A20, 1);
    func_0149C0();
    func_02D010();
    func_016628();
    func_000738();
    for (j = 0; j < 2; j++) {
        func_0027A8(j);
    }
    func_0013F8(0);
    func_000B58(0);
    func_011840();
    func_07C3D8();
    func_0800F0();
    func_07A4D0();
    func_05C430();
    func_06C4C8(2);
    func_09BC78();
    func_0BB580();
    func_015060();
    func_0153C8();
    func_024D20();
    func_02BD00();
    RENDEREFFECT_Reset__Fv();
    func_061D80();
    func_061ED8();
    func_0621F8(1.0f);
    p = D_0017D2C0;
    func_090538(p + 0x30);
    func_05D668();
    func_05CAF8();
}
