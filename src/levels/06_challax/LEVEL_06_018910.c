/* LEVEL_06:0x018910 -- placement copy of LEVEL_01_01A060.c: level teardown: releases the level block and calls shutdown hooks in order. */
extern char *D_0021E128;
extern int func_12B4E8(char *p);
extern void func_023BA0(void);
extern void func_080450(void);
extern void func_09A8F8(void);
extern void func_1206E0(void);
extern void func_1208E8(void);
extern void SND_LevelShutdown(void) __asm__("SND_LevelShutdown__Fv");
extern void GLOBALWAD_UploadTransitionBank(void) __asm__("GLOBALWAD_UploadTransitionBank__Fv");
extern void func_09C4A8(void);
extern void func_0162D8(void);
extern void func_027CF8(void);
extern void func_027A58(void);

void func_018910(void)
{
    func_12B4E8(D_0021E128 + 0x150BC);
    func_023BA0();
    func_080450();
    func_09A8F8();
    func_1206E0();
    func_1208E8();
    SND_LevelShutdown();
    GLOBALWAD_UploadTransitionBank();
    func_09C4A8();
    func_0162D8();
    func_027CF8();
    func_027A58();
}
