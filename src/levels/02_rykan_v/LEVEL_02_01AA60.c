/* LEVEL_02:0x01AA60 -- placement copy of LEVEL_01_01A060.c: level teardown: releases the level block and calls shutdown hooks in order. */
extern char *D_002488A8;
extern int func_13B1C8(char *p);
extern void func_025DF8(void);
extern void func_08DF08(void);
extern void func_0A6A10(void);
extern void func_130438(void);
extern void func_130640(void);
extern void SND_LevelShutdown(void) __asm__("SND_LevelShutdown__Fv");
extern void GLOBALWAD_UploadTransitionBank(void) __asm__("GLOBALWAD_UploadTransitionBank__Fv");
extern void func_0A85E8(void);
extern void func_018418(void);
extern void func_02A0D8(void);
extern void func_029E38(void);

void func_01AA60(void)
{
    func_13B1C8(D_002488A8 + 0x150BC);
    func_025DF8();
    func_08DF08();
    func_0A6A10();
    func_130438();
    func_130640();
    SND_LevelShutdown();
    GLOBALWAD_UploadTransitionBank();
    func_0A85E8();
    func_018418();
    func_02A0D8();
    func_029E38();
}
