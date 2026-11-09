/* LEVEL_15.REL:0x100CE0: reviewed 168-byte candidate, held for ABI review.
 * Prepares a sub-record, runs the callback of the indexed table entry, then
 * calls every registered callback.
 * pinned C with gnu-ee-trial links 168/168 bytes and is byte-exact at this and
 * 1 other USA placement, but the prototypes disagree.
 * It declares func_12B488 returning void with (pointer, int), but the accepted
 * LEVEL_15_12B488.c defines it returning void with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct Rec {
    int a0;
    void (*f4)(char *o);
    int a8;
    void (*fC)(char *o);
    int a10;
    int a14;
    int a18;
};

struct Mgr {
    struct Rec *items;
    int count;
};

extern struct Mgr D_0016FB00;
extern void func_12B488(char *a, int b);

void func_100CE0(char *o)
{
    struct Rec *e;
    struct Rec *r;
    struct Rec *end;
    void (*cb)(char *o);
    int idx;

    func_12B488(o + 0x498, 0x13);
    idx = *(int *)(o + 4);
    e = D_0016FB00.items + idx;
    cb = e->fC;
    if (cb != 0) {
        cb(o);
    }
    r = D_0016FB00.items;
    end = r + D_0016FB00.count;
    if (r != end) {
        do {
            if (r->f4 != 0) {
                r->f4(o);
            }
            r++;
        } while (r != end);
    }
}
