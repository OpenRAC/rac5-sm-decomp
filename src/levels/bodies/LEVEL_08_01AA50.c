/* LEVEL_08:0x01AA50 -- placement copy of LEVEL_01_01A060.c: level teardown: releases the level block and calls shutdown hooks in order. */
extern char *D_00280628;
extern int func_146350(char *p);
extern void func_025D18(void);
extern void func_08F628(void);
extern void func_0AAA20(void);
extern void func_13B5C0(void);
extern void func_13B7C8(void);
extern void SND_LevelShutdown(void) __asm__("SND_LevelShutdown__Fv");
extern void GLOBALWAD_UploadTransitionBank(void) __asm__("GLOBALWAD_UploadTransitionBank__Fv");
extern void func_0AC5D0(void);
extern void func_018378(void);
extern void func_029E88(void);
extern void func_029BE8(void);

void func_01AA50(void)
{
    func_146350(D_00280628 + 0x150BC);
    func_025D18();
    func_08F628();
    func_0AAA20();
    func_13B5C0();
    func_13B7C8();
    SND_LevelShutdown();
    GLOBALWAD_UploadTransitionBank();
    func_0AC5D0();
    func_018378();
    func_029E88();
    func_029BE8();
}
