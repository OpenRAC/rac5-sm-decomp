/* FRONTEND.REL:0x019788: reviewed 112-byte candidate, held for ABI review.
 * Runs a fixed sequence of helper calls with the value from one helper and a
 * fixed argument; calls a mangled sound-update helper with zeros.
 * pinned C with gnu-ee-trial links 112/112 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_00B8F0 returning void with (int), but the accepted
 * FRONTEND_00B8F0.c defines it returning void with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern void func_004EC8(void);
extern int func_0056E8(int a0);
extern void func_00B8F0(unsigned int a0);
extern void func_015530(int a0);
extern void func_0138D0(int a0);
extern void func_0138A8(void);
extern void SND_LevelUpdate(int a0, int a1) __asm__("SND_LevelUpdate__FPC7MATRIX4T0");
extern void func_002018(void);
extern void func_00AB28(void);

void func_019788(void)
{
    int s;

    func_004EC8();
    s = func_0056E8(1);
    func_00B8F0(0xFFFFFFFFu);
    func_015530(s);
    func_0138D0(s);
    func_0138A8();
    SND_LevelUpdate(0, 0);
    func_002018();
    func_00AB28();
}
