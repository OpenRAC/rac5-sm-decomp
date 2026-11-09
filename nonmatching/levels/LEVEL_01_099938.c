/* LEVEL_01.REL:0x099938: reviewed 120-byte candidate, held for ABI review.
 * Runs a fixed initialization sequence of helper calls, one of them on a
 * global object pointer.
 * pinned C with gnu-ee-trial links 120/120 bytes and is byte-exact at this and
 * 19 other USA placements, but the prototypes disagree.
 * It declares func_0A0BC0 returning void with (int), but the accepted
 * FRONTEND_001E08.c defines it returning void with no arguments.
 * It declares func_0A0BB0 returning void with (int, int, int), but the
 * accepted FRONTEND_001E08.c defines it returning void with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern void func_0A0BC0(int a0);
extern void func_0A0908(int a0);
extern void func_0A09C8(int a0);
extern void func_0A0BB0(int a0, int a1, int a2);
extern void func_0A0BA0(int a0, unsigned int a1, unsigned int a2);
extern void func_0A0A08(int a0);
extern void func_0A0A90(int a0, int a1);
extern void func_0A2C40(void);
extern int *D_00206D90;

void func_099938(void)
{
    func_0A0BC0(0);
    func_0A0908(5);
    func_0A09C8(0);
    func_0A0BB0(1, 0, 0);
    func_0A0BA0(1, 0xFFFFFFFFu, 0xFFFFFFFFu);
    func_0A0A08(*D_00206D90);
    func_0A0A90(0, 0);
    func_0A2C40();
}
