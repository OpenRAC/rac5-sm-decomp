/* LEVEL_10:0x0196F8 -- placement copy of LEVEL_01_01A060.c: level teardown: releases the level block and calls shutdown hooks in order. */
extern char *D_0023A7A8;
extern int func_132C98(char *p);
extern void func_024E00(void);
extern void func_087940(void);
extern void func_0A1200(void);
extern void func_127EE8(void);
extern void func_1280F0(void);
extern void SND_LevelShutdown(void) __asm__("SND_LevelShutdown__Fv");
extern void GLOBALWAD_UploadTransitionBank(void) __asm__("GLOBALWAD_UploadTransitionBank__Fv");
extern void func_0A2DF0(void);
extern void func_0170F0(void);
extern void func_0296E8(void);
extern void func_029448(void);

void func_0196F8(void)
{
    func_132C98(D_0023A7A8 + 0x150BC);
    func_024E00();
    func_087940();
    func_0A1200();
    func_127EE8();
    func_1280F0();
    SND_LevelShutdown();
    GLOBALWAD_UploadTransitionBank();
    func_0A2DF0();
    func_0170F0();
    func_0296E8();
    func_029448();
}
