/* LEVEL_16.REL:0x037D78: reviewed 92-byte candidate, held for ABI review.
 * Issues five helper calls, each with the stored counter minus one.
 * pinned C with gnu-ee-trial links 92/92 bytes and is byte-exact at this and 4
 * other USA placements, but the prototypes disagree.
 * It declares func_0B9828 returning void with (int), but the accepted
 * LEVEL_16_0B9828.c defines it returning int with (int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct Obj {
    unsigned char pad0[0xF4];
    int f_F4;
};

void func_0264A0(int a);
void func_001498(int a);
void func_000BF0(int a);
void func_079398(int a);
void func_0B9828(int a);

void func_037D78(struct Obj *o)
{
    func_0264A0(o->f_F4 - 1);
    func_001498(o->f_F4 - 1);
    func_000BF0(o->f_F4 - 1);
    func_079398(o->f_F4 - 1);
    func_0B9828(o->f_F4 - 1);
}
