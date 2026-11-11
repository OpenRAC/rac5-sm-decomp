/* LEVEL_20:0x0162D8 -- placement copy of LEVEL_01_01A060.c: level teardown: releases the level block and calls shutdown hooks in order. */
extern char *D_00137A28;
extern int func_0E4970(char *p);
extern void func_01FD28(void);
extern void func_066788(void);
extern void func_079CE8(void);
extern void func_0DEC00(void);
extern void func_0DEE08(void);
extern void SND_LevelShutdown(void) __asm__("SND_LevelShutdown__Fv");
extern void GLOBALWAD_UploadTransitionBank(void) __asm__("GLOBALWAD_UploadTransitionBank__Fv");
extern void func_07B630(void);
extern void func_013FB0(void);
extern void func_023E70(void);
extern void func_023BD0(void);

void func_0162D8(void)
{
    func_0E4970(D_00137A28 + 0x150BC);
    func_01FD28();
    func_066788();
    func_079CE8();
    func_0DEC00();
    func_0DEE08();
    SND_LevelShutdown();
    GLOBALWAD_UploadTransitionBank();
    func_07B630();
    func_013FB0();
    func_023E70();
    func_023BD0();
}
