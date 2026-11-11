/* LEVEL_03:0x019E70 -- placement copy of LEVEL_01_01A060.c: level teardown: releases the level block and calls shutdown hooks in order. */
extern char *D_0024C228;
extern int func_1331E0(char *p);
extern void func_025368(void);
extern void func_087430(void);
extern void func_09FEA8(void);
extern void func_1282F0(void);
extern void func_1284F8(void);
extern void SND_LevelShutdown(void) __asm__("SND_LevelShutdown__Fv");
extern void GLOBALWAD_UploadTransitionBank(void) __asm__("GLOBALWAD_UploadTransitionBank__Fv");
extern void func_0A1A58(void);
extern void func_017838(void);
extern void func_029708(void);
extern void func_029468(void);

void func_019E70(void)
{
    func_1331E0(D_0024C228 + 0x150BC);
    func_025368();
    func_087430();
    func_09FEA8();
    func_1282F0();
    func_1284F8();
    SND_LevelShutdown();
    GLOBALWAD_UploadTransitionBank();
    func_0A1A58();
    func_017838();
    func_029708();
    func_029468();
}
