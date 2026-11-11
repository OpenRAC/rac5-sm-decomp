/* LEVEL_23:0x018CC8 -- placement copy of LEVEL_01_01A060.c: level teardown: releases the level block and calls shutdown hooks in order. */
extern char *D_001FE828;
extern int func_126590(char *p);
extern void func_0234E0(void);
extern void func_07D498(void);
extern void func_096E68(void);
extern void func_11AF00(void);
extern void func_11B108(void);
extern void SND_LevelShutdown(void) __asm__("SND_LevelShutdown__Fv");
extern void GLOBALWAD_UploadTransitionBank(void) __asm__("GLOBALWAD_UploadTransitionBank__Fv");
extern void func_098A18(void);
extern void func_0168C0(void);
extern void func_027480(void);
extern void func_0271E0(void);

void func_018CC8(void)
{
    func_126590(D_001FE828 + 0x150BC);
    func_0234E0();
    func_07D498();
    func_096E68();
    func_11AF00();
    func_11B108();
    SND_LevelShutdown();
    GLOBALWAD_UploadTransitionBank();
    func_098A18();
    func_0168C0();
    func_027480();
    func_0271E0();
}
