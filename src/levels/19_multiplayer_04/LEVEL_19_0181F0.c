/* LEVEL_19:0x0181F0 -- placement copy of LEVEL_01_01A060.c: level teardown: releases the level block and calls shutdown hooks in order. */
extern char *D_001E0228;
extern int func_112228(char *p);
extern void func_022CC0(void);
extern void func_079000(void);
extern void func_08EC78(void);
extern void func_107558(void);
extern void func_107760(void);
extern void SND_LevelShutdown(void) __asm__("SND_LevelShutdown__Fv");
extern void GLOBALWAD_UploadTransitionBank(void) __asm__("GLOBALWAD_UploadTransitionBank__Fv");
extern void func_0907C8(void);
extern void func_015DB8(void);
extern void func_026F10(void);
extern void func_026C70(void);

void func_0181F0(void)
{
    func_112228(D_001E0228 + 0x150BC);
    func_022CC0();
    func_079000();
    func_08EC78();
    func_107558();
    func_107760();
    SND_LevelShutdown();
    GLOBALWAD_UploadTransitionBank();
    func_0907C8();
    func_015DB8();
    func_026F10();
    func_026C70();
}
