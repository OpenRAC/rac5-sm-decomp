/* LEVEL_01.REL:0x01A060: reviewed 132-byte candidate, held for ABI review.
 * Level teardown: releases the level block and calls shutdown hooks in order.
 * pinned C with gnu-ee-trial links 132/132 bytes and is byte-exact at this and
 * 19 other USA placements, but the prototypes disagree.
 * It declares func_134E18 returning void with (pointer), but the accepted
 * FRONTEND_003E10.c defines it returning int with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern char *D_002313A8;
extern void func_134E18(char *p);
extern void func_025498(void);
extern void func_0875D8(void);
extern void func_0A0120(void);
extern void func_12A088(void);
extern void func_12A290(void);
extern void SND_LevelShutdown(void) __asm__("SND_LevelShutdown__Fv");
extern void GLOBALWAD_UploadTransitionBank(void) __asm__("GLOBALWAD_UploadTransitionBank__Fv");
extern void func_0A1CD8(void);
extern void func_017A88(void);
extern void func_029910(void);
extern void func_029670(void);

void func_01A060(void)
{
    func_134E18(D_002313A8 + 0x150BC);
    func_025498();
    func_0875D8();
    func_0A0120();
    func_12A088();
    func_12A290();
    SND_LevelShutdown();
    GLOBALWAD_UploadTransitionBank();
    func_0A1CD8();
    func_017A88();
    func_029910();
    func_029670();
}
