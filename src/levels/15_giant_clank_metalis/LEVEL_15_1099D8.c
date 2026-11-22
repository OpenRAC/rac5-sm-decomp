/* LEVEL_15:0x1099D8 -- runs the per-state callback table for an object, then two child updates. */
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
};

extern StateSet D_0016FF50;
extern void func_12B488(void *p, int v);
extern void func_12A158(void *p);
extern void func_11DEA0();

void func_1099D8(Obj *o)
{
    State *s;
    State *end;
    State *st;
    void (*cb)(Obj *o);
    char *q;
    char *p;

    func_12B488((char *)o + 0x3E4, 0x15);
    st = D_0016FF50.states + o->cur;
    cb = st->cbC;
    if (cb)
        cb(o);
    p = (char *)o + 0x2AC;
    q = (char *)o + 0x338;
    s = D_0016FF50.states;
    end = s + D_0016FF50.count;
    for (; s != end; s++) {
        if (s->cb4)
            s->cb4(o);
    }
    func_12A158(p);
    func_11DEA0(q);
}
