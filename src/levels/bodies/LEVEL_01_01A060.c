/* LEVEL_01:0x01A060 -- level teardown: releases the level block and calls shutdown hooks in order. */
extern char *D_002313A8;
extern int func_134E18(char *p);
extern void func_025498(void);
extern void func_0875D8(void);
extern void func_0A0120(void);
extern void func_12A088(void);
extern void func_12A290(void);
extern void SND_LevelShutdown(void) __asm__("SND_LevelShutdown__Fv");
extern void GLOBALWAD_UploadTransitionBank(void) __asm__("GLOBALWAD_UploadTransitionBank__Fv");
extern void func_0A1CD8(void);
extern void func_017A88(void);
extern void func_029910(void);
extern void func_029670(void);

void func_01A060(void)
{
    func_134E18(D_002313A8 + 0x150BC);
    func_025498();
    func_0875D8();
    func_0A0120();
    func_12A088();
    func_12A290();
    SND_LevelShutdown();
    GLOBALWAD_UploadTransitionBank();
    func_0A1CD8();
    func_017A88();
    func_029910();
    func_029670();
}
