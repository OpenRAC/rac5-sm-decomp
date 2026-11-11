/* LEVEL_22:0x0167D0 -- placement copy of LEVEL_01_01A060.c: level teardown: releases the level block and calls shutdown hooks in order. */
extern char *D_00182FA8;
extern int func_10C2E8(char *p);
extern void func_020278(void);
extern void func_0789F0(void);
extern void func_08E7A0(void);
extern void func_100C78(void);
extern void func_100E80(void);
extern void SND_LevelShutdown(void) __asm__("SND_LevelShutdown__Fv");
extern void GLOBALWAD_UploadTransitionBank(void) __asm__("GLOBALWAD_UploadTransitionBank__Fv");
extern void func_0902E8(void);
extern void func_014778(void);
extern void func_023EA8(void);
extern void func_023C08(void);

void func_0167D0(void)
{
    func_10C2E8(D_00182FA8 + 0x150BC);
    func_020278();
    func_0789F0();
    func_08E7A0();
    func_100C78();
    func_100E80();
    SND_LevelShutdown();
    GLOBALWAD_UploadTransitionBank();
    func_0902E8();
    func_014778();
    func_023EA8();
    func_023C08();
}
