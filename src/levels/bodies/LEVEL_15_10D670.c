/* LEVEL_15:0x10D670 -- runs the per-state callback table for an object, then its child update. */
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
