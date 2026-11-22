/* USA LEVEL_15.REL:0x1099D8, 208-byte candidate (21 November 2026).
 * Measured pinned: 4 differing words; first difference at 0x64.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
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
};

extern StateSet D_0016FF50;
extern void func_12B488(void *p, int v);
extern void func_12A158(void *p);
extern void func_11DEA0(void *p);

void func_1099D8(Obj *o)
{
    State *s;
    State *end;
    State *st;
    void (*cb)(Obj *o);

    func_12B488((char *)o + 0x3E4, 0x15);
    st = D_0016FF50.states + o->cur;
    cb = st->cbC;
    if (cb)
        cb(o);
    s = D_0016FF50.states;
    end = s + D_0016FF50.count;
    for (; s != end; s++) {
        if (s->cb4)
            s->cb4(o);
    }
    func_12A158((char *)o + 0x2AC);
    func_11DEA0((char *)o + 0x338);
}
