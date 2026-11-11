/* LEVEL_21:0x0163A8 -- placement copy of LEVEL_01_01A060.c: level teardown: releases the level block and calls shutdown hooks in order. */
extern char *D_00179528;
extern int func_0F3CE0(char *p);
extern void func_01F7A8(void);
extern void func_06BCB8(void);
extern void func_080A60(void);
extern void func_0EDEB0(void);
extern void func_0EE0B8(void);
extern void SND_LevelShutdown(void) __asm__("SND_LevelShutdown__Fv");
extern void GLOBALWAD_UploadTransitionBank(void) __asm__("GLOBALWAD_UploadTransitionBank__Fv");
extern void func_0825D0(void);
extern void func_014348(void);
extern void func_0230E8(void);
extern void func_022E48(void);

void func_0163A8(void)
{
    func_0F3CE0(D_00179528 + 0x150BC);
    func_01F7A8();
    func_06BCB8();
    func_080A60();
    func_0EDEB0();
    func_0EE0B8();
    SND_LevelShutdown();
    GLOBALWAD_UploadTransitionBank();
    func_0825D0();
    func_014348();
    func_0230E8();
    func_022E48();
}
