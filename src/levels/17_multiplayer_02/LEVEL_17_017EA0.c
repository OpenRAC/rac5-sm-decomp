/* LEVEL_17:0x017EA0 -- placement copy of LEVEL_01_01A060.c: level teardown: releases the level block and calls shutdown hooks in order. */
extern char *D_001D13A8;
extern int func_111100(char *p);
extern void func_022A00(void);
extern void func_079590(void);
extern void func_08E8D8(void);
extern void func_106430(void);
extern void func_106638(void);
extern void SND_LevelShutdown(void) __asm__("SND_LevelShutdown__Fv");
extern void GLOBALWAD_UploadTransitionBank(void) __asm__("GLOBALWAD_UploadTransitionBank__Fv");
extern void func_090430(void);
extern void func_015A18(void);
extern void func_026CE8(void);
extern void func_026A48(void);

void func_017EA0(void)
{
    func_111100(D_001D13A8 + 0x150BC);
    func_022A00();
    func_079590();
    func_08E8D8();
    func_106430();
    func_106638();
    SND_LevelShutdown();
    GLOBALWAD_UploadTransitionBank();
    func_090430();
    func_015A18();
    func_026CE8();
    func_026A48();
}
