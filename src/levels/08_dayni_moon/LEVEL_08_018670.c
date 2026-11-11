/* LEVEL_08:0x018670 -- placement copy of LEVEL_01_017D80.c: resets all subsystems for a level start. */
extern unsigned D_00237E28;
extern unsigned D_0027ED70[8];
extern int D_00264470;
extern char D_0027EB10[];
extern char D_0027EB20[];
extern char D_002843D0[];

extern void func_025D18(void);
extern void func_1AD4C0(int a);
extern void func_1AD410(void);
extern void SND_StopAllATRAC__Fv(void);
extern void SND_StopSoundsImmediate__Fb(int a);
extern void SND_PauseAtracResetLockId__Fv(void);
extern void func_0B1CA0(int a);
extern void func_0133D0(void);
extern void func_079410(void);
extern void func_028D80(int a);
extern void func_027608(void *a, void *b, int c);
extern void func_0189F0(void);
extern void func_03C9A8(void);
extern void func_01AD10(void);
extern void func_000BE0(void);
extern void func_002C70(int a);
extern void func_0018C0(int a);
extern void func_001000(int a);
extern void func_011EF0(void);
extern void func_0A04E0(void);
extern void func_0AA080(void);
extern void func_09E530(void);
extern void func_073678(void);
extern void func_08FE38(int a);
extern void func_0C6520(void);
extern void func_0E5F10(void);
extern void func_019230(void);
extern void func_019598(void);
extern void func_02BD20(void);
extern void func_03B198(void);
extern void RENDEREFFECT_Reset__Fv(void);
extern void func_085048(void);
extern void func_0851A0(void);
extern void func_0854C0(float a);
extern void func_0BA5A8(void *a);
extern void func_07C2B8(void);
extern void func_07B5B8(void);

void func_018670(void)
{
    unsigned i;
    unsigned j;
    char *p;

    func_025D18();
    func_1AD4C0(1);
    func_1AD410();
    SND_StopAllATRAC__Fv();
    SND_StopSoundsImmediate__Fb(1);
    SND_PauseAtracResetLockId__Fv();
    func_0B1CA0(0);
    D_00237E28 = 0xFFFFFFFF;
    for (i = 0; i < 8; i++) {
        D_0027ED70[i] = 0xFFFFFFFF;
    }
    func_0133D0();
    func_079410();
    func_028D80(D_00264470);
    func_027608(D_0027EB10, D_0027EB20, 1);
    func_0189F0();
    func_03C9A8();
    func_01AD10();
    func_000BE0();
    for (j = 0; j < 2; j++) {
        func_002C70(j);
    }
    func_0018C0(0);
    func_001000(0);
    func_011EF0();
    func_0A04E0();
    func_0AA080();
    func_09E530();
    func_073678();
    func_08FE38(2);
    func_0C6520();
    func_0E5F10();
    func_019230();
    func_019598();
    func_02BD20();
    func_03B198();
    RENDEREFFECT_Reset__Fv();
    func_085048();
    func_0851A0();
    func_0854C0(1.0f);
    p = D_002843D0;
    func_0BA5A8(p + 0x30);
    func_07C2B8();
    func_07B5B8();
}
