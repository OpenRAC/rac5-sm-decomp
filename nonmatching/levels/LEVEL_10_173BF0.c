/* LEVEL_10.REL:0x173BF0: reviewed 84-byte candidate, held for ABI review.
 * Issues six configuration calls, one of them using a field of the owner.
 * pinned C with gnu-ee-trial links 84/84 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_0B8670 returning void with (int, int), but the accepted
 * LEVEL_10_0B8670.c defines it returning void with (pointer, pointer).
 * It declares func_0B8518 returning void with (int), but the accepted
 * LEVEL_10_0B8518.c defines it returning void with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
void func_0B8670(int a, int b);
void func_0B8518(int v);
void func_0B8550(int v);
void func_0B84B0(int v);
void func_0B85D8(int v);
void func_0B8430(int v);

struct Obj {
    unsigned char pad00[0xF0];
    int wF0;
};

void func_173BF0(struct Obj *o)
{
    func_0B8670(2, 3);
    func_0B8518(o->wF0);
    func_0B8550(100);
    func_0B84B0(71);
    func_0B85D8(90);
    func_0B8430(90);
}
