/* LEVEL_15.REL:0x10D670: reviewed 216-byte candidate, held for ABI review.
 * Runs the per-state callback table for an object, then its child update.
 * pinned C with gnu-ee-trial links 216/216 bytes and is byte-exact at this and
 * 1 other USA placement, but the prototypes disagree.
 * It declares func_12B488 returning void with (pointer, int), but the accepted
 * LEVEL_15_12B488.c defines it returning void with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct Obj Obj;

typedef struct {
    int pad0;
    void (*cb4)(Obj *o);
    int pad8;
    void (*cbC)(Obj *o);
    char pad10[0xC];
} State;

typedef struct {
    State *states;
    int count;
} StateSet;

struct Obj {
    int pad0;
    int cur;
    char pad8[0x2CC];
    int *mode;
};

extern StateSet D_00170198[];
extern void func_12B488(void *p, int v);
extern void func_13B690(void *p);

void func_10D670(Obj *o)
{
    State *s;
    State *end;
    StateSet *ss;
    State *st;
    void (*cb)(Obj *o);

    func_12B488((char *)o + 0x400, 0xB);
    st = D_00170198[*o->mode].states + o->cur;
    cb = st->cbC;
    if (cb)
        cb(o);
    ss = &D_00170198[*o->mode];
    s = ss->states;
    end = s + ss->count;
    for (; s != end; s++) {
        if (s->cb4)
            s->cb4(o);
    }
    func_13B690((char *)o + 0x2DC);
}
