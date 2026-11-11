/* LEVEL_20:0x0142B8 -- placement copy of LEVEL_01_017D80.c: resets all subsystems for a level start. */
extern unsigned D_000FD418;
extern unsigned D_00136170[8];
extern int D_00131510;
extern char D_00135F10[];
extern char D_00135F20[];
extern char D_0013BA10[];

extern void func_01FD28(void);
extern void func_0F7AA8(int a);
extern void func_0F7A98(void);
extern void SND_StopAllATRAC__Fv(void);
extern void SND_StopSoundsImmediate__Fb(int a);
extern void SND_PauseAtracResetLockId__Fv(void);
extern void func_080378(int a);
extern void func_012788(void);
extern void func_0575D8(void);
extern void func_022C28(int a);
extern void func_0215F0(void *a, void *b, int c);
extern void func_014638(void);
extern void func_02DE90(void);
extern void func_016530(void);
extern void func_000690(void);
extern void func_002808(int a);
extern void func_001458(int a);
extern void func_000BD8(int a);
extern void func_011848(void);
extern void func_076750(void);
extern void func_079370(void);
extern void func_074A30(void);
extern void func_0574D8(void);
extern void func_066F98(int a);
extern void func_094BB0(void);
extern void func_0B4B38(void);
extern void func_014C90(void);
extern void func_014FF8(void);
extern void func_025AF8(void);
extern void func_02CB28(void);
extern void RENDEREFFECT_Reset__Fv(void);
extern void func_05F048(void);
extern void func_05F1A0(void);
extern void func_05F4D0(float a);
extern void func_088A58(void *a);
extern void func_058868(void);
extern void func_057C80(void);

void func_0142B8(void)
{
    unsigned i;
    unsigned j;
    char *p;

    func_01FD28();
    func_0F7AA8(1);
    func_0F7A98();
    SND_StopAllATRAC__Fv();
    SND_StopSoundsImmediate__Fb(1);
    SND_PauseAtracResetLockId__Fv();
    func_080378(0);
    D_000FD418 = 0xFFFFFFFF;
    for (i = 0; i < 8; i++) {
        D_00136170[i] = 0xFFFFFFFF;
    }
    func_012788();
    func_0575D8();
    func_022C28(D_00131510);
    func_0215F0(D_00135F10, D_00135F20, 1);
    func_014638();
    func_02DE90();
    func_016530();
    func_000690();
    for (j = 0; j < 2; j++) {
        func_002808(j);
    }
    func_001458(0);
    func_000BD8(0);
    func_011848();
    func_076750();
    func_079370();
    func_074A30();
    func_0574D8();
    func_066F98(2);
    func_094BB0();
    func_0B4B38();
    func_014C90();
    func_014FF8();
    func_025AF8();
    func_02CB28();
    RENDEREFFECT_Reset__Fv();
    func_05F048();
    func_05F1A0();
    func_05F4D0(1.0f);
    p = D_0013BA10;
    func_088A58(p + 0x30);
    func_058868();
    func_057C80();
}
