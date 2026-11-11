/* LEVEL_16:0x0184F0 -- placement copy of LEVEL_01_01A060.c: level teardown: releases the level block and calls shutdown hooks in order. */
extern char *D_001E00A8;
extern int func_111B88(char *p);
extern void func_023080(void);
extern void func_078B18(void);
extern void func_08F3E0(void);
extern void func_106EB8(void);
extern void func_1070C0(void);
extern void SND_LevelShutdown(void) __asm__("SND_LevelShutdown__Fv");
extern void GLOBALWAD_UploadTransitionBank(void) __asm__("GLOBALWAD_UploadTransitionBank__Fv");
extern void func_090F38(void);
extern void func_015FF8(void);
extern void func_027368(void);
extern void func_0270C8(void);

void func_0184F0(void)
{
    func_111B88(D_001E00A8 + 0x150BC);
    func_023080();
    func_078B18();
    func_08F3E0();
    func_106EB8();
    func_1070C0();
    SND_LevelShutdown();
    GLOBALWAD_UploadTransitionBank();
    func_090F38();
    func_015FF8();
    func_027368();
    func_0270C8();
}
