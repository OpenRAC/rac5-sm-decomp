/* LEVEL_10:0x199030 -- drops the dangling references: clears each of the five tracked record pointers (two in the linked record, three in the state record) whose target has a pending flag in bits 1/2, then runs the update helpers and ages the timer when the mode byte is not 1. */
typedef struct Rec {
    char pad_00[0x64];
    unsigned int flags;
} Rec;

typedef struct Link {
    char pad_00[0x2C];
    Rec *a;
    Rec *b;
} Link;

typedef struct State {
    char pad_00[0x28];
    Rec *c;
    char pad_2C[0x40 - 0x2C];
    Rec *d;
    Rec *e;
    char pad_48[0x154 - 0x48];
    float timer;
} State;

typedef struct Obj {
    char pad_00[0x45];
    unsigned char mode;
    char pad_46[0x54 - 0x46];
    Link *link;
    State *state;
} Obj;

extern void func_199B50(Obj *o);
extern void func_199E10(Obj *o);
extern void func_19A838(Obj *o);
extern void func_19AC40(Obj *o);

void func_199030(Obj *o)
{
    Link *link = o->link;
    State *st = o->state;

    if (link->a != 0 && (link->a->flags & 6) != 0)
        link->a = 0;
    if (link->b != 0 && (link->b->flags & 6) != 0)
        link->b = 0;
    if (st->c != 0 && (st->c->flags & 6) != 0)
        st->c = 0;
    if (st->d != 0 && (st->d->flags & 6) != 0)
        st->d = 0;
    if (st->e != 0 && (st->e->flags & 6) != 0)
        st->e = 0;
    func_199B50(o);
    if (o->mode != 1) {
        st->timer = st->timer - 1.0f;
        func_199E10(o);
        func_19A838(o);
        func_19AC40(o);
    }
}
