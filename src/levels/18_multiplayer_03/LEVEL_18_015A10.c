/* LEVEL_18:0x015A10 -- placement copy of LEVEL_01_017D80.c: resets all subsystems for a level start. */
extern unsigned D_0019C1B0;
extern unsigned D_001DEB70[8];
extern int D_001D1A20;
extern char D_001DE910[];
extern char D_001DE920[];
extern char D_001E4410[];

extern void func_0226C8(void);
extern void func_158F58(int a);
extern void func_158EA8(void);
extern void SND_StopAllATRAC__Fv(void);
extern void SND_StopSoundsImmediate__Fb(int a);
extern void SND_PauseAtracResetLockId__Fv(void);
extern void func_094C90(int a);
extern void func_012DC0(void);
extern void func_061A88(void);
extern void func_0256B8(int a);
extern void func_024028(void *a, void *b, int c);
extern void func_015D90(void);
extern void func_032378(void);
extern void func_017DC0(void);
extern void func_0006A8(void);
extern void func_0028B8(int a);
extern void func_001508(int a);
extern void func_000BF0(int a);
extern void func_011948(void);
extern void func_0888F8(void);
extern void func_08DA80(void);
extern void func_086B40(void);
extern void func_05D328(void);
extern void func_078CA8(int a);
extern void func_0A9658(void);
extern void func_0C95E0(void);
extern void func_0164A0(void);
extern void func_016808(void);
extern void func_0285A0(void);
extern void func_030D68(void);
extern void RENDEREFFECT_Reset__Fv(void);
extern void func_06F708(void);
extern void func_06F860(void);
extern void func_06FB90(float a);
extern void func_09D370(void *a);
extern void func_065928(void);
extern void func_064BD8(void);

void func_015A10(void)
{
    unsigned i;
    unsigned j;
    char *p;

    func_0226C8();
    func_158F58(1);
    func_158EA8();
    SND_StopAllATRAC__Fv();
    SND_StopSoundsImmediate__Fb(1);
    SND_PauseAtracResetLockId__Fv();
    func_094C90(0);
    D_0019C1B0 = 0xFFFFFFFF;
    for (i = 0; i < 8; i++) {
        D_001DEB70[i] = 0xFFFFFFFF;
    }
    func_012DC0();
    func_061A88();
    func_0256B8(D_001D1A20);
    func_024028(D_001DE910, D_001DE920, 1);
    func_015D90();
    func_032378();
    func_017DC0();
    func_0006A8();
    for (j = 0; j < 2; j++) {
        func_0028B8(j);
    }
    func_001508(0);
    func_000BF0(0);
    func_011948();
    func_0888F8();
    func_08DA80();
    func_086B40();
    func_05D328();
    func_078CA8(2);
    func_0A9658();
    func_0C95E0();
    func_0164A0();
    func_016808();
    func_0285A0();
    func_030D68();
    RENDEREFFECT_Reset__Fv();
    func_06F708();
    func_06F860();
    func_06FB90(1.0f);
    p = D_001E4410;
    func_09D370(p + 0x30);
    func_065928();
    func_064BD8();
}
