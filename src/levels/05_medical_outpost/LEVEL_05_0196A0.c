/* LEVEL_05:0x0196A0 -- placement copy of LEVEL_01_01A060.c: level teardown: releases the level block and calls shutdown hooks in order. */
extern char *D_0021D0A8;
extern int func_130790(char *p);
extern void func_024430(void);
extern void func_084F30(void);
extern void func_09E6D8(void);
extern void func_125A00(void);
extern void func_125C08(void);
extern void SND_LevelShutdown(void) __asm__("SND_LevelShutdown__Fv");
extern void GLOBALWAD_UploadTransitionBank(void) __asm__("GLOBALWAD_UploadTransitionBank__Fv");
extern void func_0A0298(void);
extern void func_017120(void);
extern void func_028588(void);
extern void func_0282E8(void);

void func_0196A0(void)
{
    func_130790(D_0021D0A8 + 0x150BC);
    func_024430();
    func_084F30();
    func_09E6D8();
    func_125A00();
    func_125C08();
    SND_LevelShutdown();
    GLOBALWAD_UploadTransitionBank();
    func_0A0298();
    func_017120();
    func_028588();
    func_0282E8();
}
