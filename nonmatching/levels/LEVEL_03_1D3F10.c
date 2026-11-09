/* LEVEL_03.REL:0x1D3F10: reviewed 120-byte candidate, held for ABI review.
 * Runs a probe; on success calls a setup helper with a byte from the second
 * record and a fixed float pair, then returns the result of a final helper;
 * returns twenty-five when the probe fails.
 * pinned C with gnu-ee-trial links 120/120 bytes and is byte-exact at this and
 * 1 other USA placement, but the prototypes disagree.
 * It declares func_1D3E80 returning int with (pointer), but the accepted
 * LEVEL_03_1D3E80.c defines it returning int with (int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct Rec {
    unsigned char pad0[0x7A];
    unsigned char b7A;
};

struct Obj {
    unsigned char pad0[0x54];
    void *p54;
    struct Rec *p58;
};

int func_1D3E80(struct Obj *o);
void func_030E38(void *a, struct Obj *o, int b, unsigned int c, int d, float f, float g);
int func_1D3F88(struct Obj *o);

int func_1D3F10(struct Obj *o)
{
    struct Rec *q;
    void *p;

    p = o->p54;
    q = o->p58;
    if (func_1D3E80(o) == 0) {
        return 25;
    }
    func_030E38(p, o, 0, q->b7A, 0, 0.0f, 16.0f);
    return func_1D3F88(o);
}
