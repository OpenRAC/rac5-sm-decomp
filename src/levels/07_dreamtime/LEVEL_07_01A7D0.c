/* LEVEL_07:0x01A7D0 -- placement copy of LEVEL_01_01A060.c: level teardown: releases the level block and calls shutdown hooks in order. */
extern char *D_00246CA8;
extern int func_137E18(char *p);
extern void func_025A60(void);
extern void func_0896A8(void);
extern void func_0A2100(void);
extern void func_12D088(void);
extern void func_12D290(void);
extern void SND_LevelShutdown(void) __asm__("SND_LevelShutdown__Fv");
extern void GLOBALWAD_UploadTransitionBank(void) __asm__("GLOBALWAD_UploadTransitionBank__Fv");
extern void func_0A3CD8(void);
extern void func_018198(void);
extern void func_029C50(void);
extern void func_0299B0(void);

void func_01A7D0(void)
{
    func_137E18(D_00246CA8 + 0x150BC);
    func_025A60();
    func_0896A8();
    func_0A2100();
    func_12D088();
    func_12D290();
    SND_LevelShutdown();
    GLOBALWAD_UploadTransitionBank();
    func_0A3CD8();
    func_018198();
    func_029C50();
    func_0299B0();
}
