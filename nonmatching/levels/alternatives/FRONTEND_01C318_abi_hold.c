/* FRONTEND.REL:0x01C318: reviewed 68-byte candidate, held for ABI review.
 * Frontend start-up sequence.
 * pinned C with gnu-ee-trial links 68/68 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_0066E0 returning void with (int), but the accepted
 * FRONTEND_0066E0.c defines it returning void with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
void func_0066E0(int);
void func_01B330(void);
void func_01BFE8(void);
void func_0197F8(void);
void func_006850(int, unsigned int);

void func_01C318(void)
{
    func_0066E0(1);
    func_01B330();
    func_01BFE8();
    func_0197F8();
    func_006850(0, 0xFFFFFFFF);
}
