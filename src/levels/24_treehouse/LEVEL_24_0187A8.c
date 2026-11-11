/* LEVEL_24:0x0187A8 -- placement copy of LEVEL_01_01A060.c: level teardown: releases the level block and calls shutdown hooks in order. */
extern char *D_001FD2A8;
extern int func_12A918(char *p);
extern void func_023218(void);
extern void func_080878(void);
extern void func_0999A0(void);
extern void func_11FB88(void);
extern void func_11FD90(void);
extern void SND_LevelShutdown(void) __asm__("SND_LevelShutdown__Fv");
extern void GLOBALWAD_UploadTransitionBank(void) __asm__("GLOBALWAD_UploadTransitionBank__Fv");
extern void func_09B550(void);
extern void func_0166F8(void);
extern void func_026E50(void);
extern void func_026BB0(void);

void func_0187A8(void)
{
    func_12A918(D_001FD2A8 + 0x150BC);
    func_023218();
    func_080878();
    func_0999A0();
    func_11FB88();
    func_11FD90();
    SND_LevelShutdown();
    GLOBALWAD_UploadTransitionBank();
    func_09B550();
    func_0166F8();
    func_026E50();
    func_026BB0();
}
