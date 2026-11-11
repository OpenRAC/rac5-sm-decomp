/* LEVEL_07:0x018490 -- placement copy of LEVEL_01_017D80.c: resets all subsystems for a level start. */
extern unsigned D_002035A8;
extern unsigned D_002453F0[8];
extern int D_0022F4F0;
extern char D_00245190[];
extern char D_002451A0[];
extern char D_0024AA40[];

extern void func_025A60(void);
extern void func_195EE8(int a);
extern void func_195E38(void);
extern void SND_StopAllATRAC__Fv(void);
extern void SND_StopSoundsImmediate__Fb(int a);
extern void SND_PauseAtracResetLockId__Fv(void);
extern void func_0A93A8(int a);
extern void func_013368(void);
extern void func_073410(void);
extern void func_028B68(int a);
extern void func_027340(void *a, void *b, int c);
extern void func_018810(void);
extern void func_037E08(void);
extern void func_01AA58(void);
extern void func_000BE0(void);
extern void func_002C50(int a);
extern void func_0018A0(int a);
extern void func_001000(int a);
extern void func_011E88(void);
extern void func_09A420(void);
extern void func_0A1760(void);
extern void func_098498(void);
extern void func_06ECB0(void);
extern void func_089EB8(int a);
extern void func_0BD690(void);
extern void func_0DCFA0(void);
extern void func_018FB0(void);
extern void func_019318(void);
extern void func_02B8E8(void);
extern void func_036850(void);
extern void RENDEREFFECT_Reset__Fv(void);
extern void func_07F240(void);
extern void func_07F398(void);
extern void func_07F6B8(float a);
extern void func_0B1C70(void *a);
extern void func_077390(void);
extern void func_0766B8(void);

void func_018490(void)
{
    unsigned i;
    unsigned j;
    char *p;

    func_025A60();
    func_195EE8(1);
    func_195E38();
    SND_StopAllATRAC__Fv();
    SND_StopSoundsImmediate__Fb(1);
    SND_PauseAtracResetLockId__Fv();
    func_0A93A8(0);
    D_002035A8 = 0xFFFFFFFF;
    for (i = 0; i < 8; i++) {
        D_002453F0[i] = 0xFFFFFFFF;
    }
    func_013368();
    func_073410();
    func_028B68(D_0022F4F0);
    func_027340(D_00245190, D_002451A0, 1);
    func_018810();
    func_037E08();
    func_01AA58();
    func_000BE0();
    for (j = 0; j < 2; j++) {
        func_002C50(j);
    }
    func_0018A0(0);
    func_001000(0);
    func_011E88();
    func_09A420();
    func_0A1760();
    func_098498();
    func_06ECB0();
    func_089EB8(2);
    func_0BD690();
    func_0DCFA0();
    func_018FB0();
    func_019318();
    func_02B8E8();
    func_036850();
    RENDEREFFECT_Reset__Fv();
    func_07F240();
    func_07F398();
    func_07F6B8(1.0f);
    p = D_0024AA40;
    func_0B1C70(p + 0x30);
    func_077390();
    func_0766B8();
}
