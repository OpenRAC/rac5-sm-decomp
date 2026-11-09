/* FRONTEND.REL:0x019520: reviewed 284-byte candidate, held for ABI review.
 * Resets the loaded-level state and reinitializes subsystems.
 * pinned C with gnu-ee-trial links 284/284 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_006650 returning void with (int), but the accepted
 * FRONTEND_006650.c defines it returning void with no arguments.
 * It declares func_004DC0 returning void with no arguments, but the accepted
 * FRONTEND_004DC0.c defines it returning int with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct Globals {
    char pad0[0x18];
    int f18;
    char pad1C[0x3C0 - 0x1C];
    char at3C0[0x150BC - 0x3C0];
    char at150BC[0x15148 - 0x150BC];
    unsigned char b15148;
};
extern struct Globals *D_0010BE50;
extern void GlobalWad_ResetLoadedFlags(void) __asm__("GlobalWad_ResetLoadedFlags__Fv");
extern void ReleaseBufferCache(void) __asm__("ReleaseBufferCache__Fv");
extern void GLOBALWAD_ReleaseTransitionBank(void) __asm__("GLOBALWAD_ReleaseTransitionBank__Fv");
extern void func_002F80(void *p, int a);
extern void func_003160(void *p, int a);
extern void func_0205A8(void *p);
extern void func_002D50(void);
extern void func_006650(int a);
extern void func_0066B0(void);
extern void func_0079E0(int a);
extern void func_007A18(void);
extern void func_0025B8(void);
extern void func_004DC0(void);
extern void func_011768(void);
extern void func_011510(void);
extern void func_01FFC0(void);
extern void func_022188(void *p);
extern void func_021390(void *p);
extern void func_0215E0(void);
extern void func_001AE0(int a, int b);

void func_019520(void)
{
    func_002F80((char *)D_0010BE50 + 0x3C0, 1);
    func_003160((char *)D_0010BE50 + 0x14320, 1);
    func_0205A8((char *)D_0010BE50 + 0x14FC0);
    GlobalWad_ResetLoadedFlags();
    D_0010BE50->f18 = 2;
    func_002D50();
    ReleaseBufferCache();
    GLOBALWAD_ReleaseTransitionBank();
    func_006650(0x20000);
    func_0066B0();
    func_0079E0(1);
    func_007A18();
    func_0025B8();
    func_004DC0();
    func_011768();
    func_011510();
    func_01FFC0();
    func_022188((char *)D_0010BE50 + 0x150BC);
    func_021390((char *)D_0010BE50 + 0x150BC);
    func_0215E0();
    func_001AE0(0xB, 0);
    D_0010BE50->b15148 = 1;
}
