/* LEVEL_09:0x0194D0 -- placement copy of LEVEL_01_01A060.c: level teardown: releases the level block and calls shutdown hooks in order. */
extern char *D_00218B28;
extern int func_12DDB0(char *p);
extern void func_024790(void);
extern void func_083F90(void);
extern void func_09D3D8(void);
extern void func_123020(void);
extern void func_123228(void);
extern void SND_LevelShutdown(void) __asm__("SND_LevelShutdown__Fv");
extern void GLOBALWAD_UploadTransitionBank(void) __asm__("GLOBALWAD_UploadTransitionBank__Fv");
extern void func_09EF88(void);
extern void func_016E98(void);
extern void func_028778(void);
extern void func_0284D8(void);

void func_0194D0(void)
{
    func_12DDB0(D_00218B28 + 0x150BC);
    func_024790();
    func_083F90();
    func_09D3D8();
    func_123020();
    func_123228();
    SND_LevelShutdown();
    GLOBALWAD_UploadTransitionBank();
    func_09EF88();
    func_016E98();
    func_028778();
    func_0284D8();
}
