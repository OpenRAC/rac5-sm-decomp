/* LEVEL_04:0x019D38 -- placement copy of LEVEL_01_01A060.c: level teardown: releases the level block and calls shutdown hooks in order. */
extern char *D_0024BBA8;
extern int func_141298(char *p);
extern void func_025118(void);
extern void func_08A870(void);
extern void func_0A5338(void);
extern void func_136508(void);
extern void func_136710(void);
extern void SND_LevelShutdown(void) __asm__("SND_LevelShutdown__Fv");
extern void GLOBALWAD_UploadTransitionBank(void) __asm__("GLOBALWAD_UploadTransitionBank__Fv");
extern void func_0A6EE8(void);
extern void func_017748(void);
extern void func_0293B8(void);
extern void func_029118(void);

void func_019D38(void)
{
    func_141298(D_0024BBA8 + 0x150BC);
    func_025118();
    func_08A870();
    func_0A5338();
    func_136508();
    func_136710();
    SND_LevelShutdown();
    GLOBALWAD_UploadTransitionBank();
    func_0A6EE8();
    func_017748();
    func_0293B8();
    func_029118();
}
