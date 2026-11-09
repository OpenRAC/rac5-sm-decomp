/* LEVEL_21.REL:0x045E20: reviewed 204-byte candidate, held for ABI review.
 * Placement copy of LEVEL_01_054B90.c.
 * gnu-ee-trial C with gnu-ee-trial links 204/204 bytes and is byte-exact at
 * this USA placement, but the prototypes disagree.
 * It declares func_02F6D8 returning void with (pointer), but the accepted
 * LEVEL_15_02F6D8.c defines it returning void with no arguments.
 * It declares func_003240 returning void with (int, int, float, float), but
 * the accepted LEVEL_15_003240.c defines it returning void with (pointer,
 * pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
void func_02F6D8(char *a0);
void func_003240(int a0, int a1, float f12, float f13);
void func_003270(int a0, int a1, float f12, float f13);
void func_003390(int a0, int a1, float f12, float f13);
void func_0033E0(int a0, int a1, float f12, float f13);
void func_003028(int a0, int a1);
void func_0036B0(float f12, float f13);
void func_003720(int a0);

void func_045E20(char *a0)
{
    func_02F6D8(a0);
    func_003240(0x0A, 0, 5.0f, 1.0f);
    func_003270(0x0A, 0, 0.0f, 1.0f);
    func_003390(0x0A, 0, -0.3f, 1.0f);
    func_0033E0(0x0A, 2, 0.2f, 1.0f);
    func_003028(*(int *)(a0 + 0x59C) + 0x10, 0);
    func_0036B0(0.8f, 0.5f);
    func_003720(0);
}
