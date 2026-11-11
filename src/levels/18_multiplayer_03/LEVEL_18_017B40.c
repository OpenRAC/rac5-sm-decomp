/* LEVEL_18:0x017B40 -- placement copy of LEVEL_01_01A060.c: level teardown: releases the level block and calls shutdown hooks in order. */
extern char *D_001E0428;
extern int func_110838(char *p);
extern void func_0226C8(void);
extern void func_078498(void);
extern void func_08E3F8(void);
extern void func_105B68(void);
extern void func_105D70(void);
extern void SND_LevelShutdown(void) __asm__("SND_LevelShutdown__Fv");
extern void GLOBALWAD_UploadTransitionBank(void) __asm__("GLOBALWAD_UploadTransitionBank__Fv");
extern void func_08FF48(void);
extern void func_015708(void);
extern void func_026918(void);
extern void func_026678(void);

void func_017B40(void)
{
    func_110838(D_001E0428 + 0x150BC);
    func_0226C8();
    func_078498();
    func_08E3F8();
    func_105B68();
    func_105D70();
    SND_LevelShutdown();
    GLOBALWAD_UploadTransitionBank();
    func_08FF48();
    func_015708();
    func_026918();
    func_026678();
}
