/* LEVEL_21.REL:0x044928: reviewed 124-byte candidate, held for ABI review.
 * Placement copy of LEVEL_01_053698.c.
 * gnu-ee-trial-divpad C with gnu-ee-trial links 124/124 bytes and is byte-
 * exact at this USA placement, but the prototypes disagree.
 * It declares func_003240 returning void with (int, int, float, float), but
 * the accepted LEVEL_15_003240.c defines it returning void with (pointer,
 * pointer).
 * It declares func_003270 returning void with (int, int, float, float), but
 * the accepted LEVEL_15_003270.c defines it returning void with (pointer,
 * pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern void func_02F6D8();
extern void func_003240(int, int, float, float);
extern void func_003270(int, int, float, float);
extern void func_0033E0(int, int, float, float);
extern void func_003720(int);

void func_044928(void)
{
    func_02F6D8();
    func_003240(0xA, 2, 6.0f, 1.0f);
    func_003270(0xA, 2, 3.0f, 1.0f);
    func_0033E0(0xA, 2, -0.3f, 1.0f);
    func_003720(0);
}
