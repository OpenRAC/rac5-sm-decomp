/* LEVEL_01:0x16FB20 -- clears three flag bits on the slot's object, then calls the slot's handler on it. */
typedef struct Obj {
    char pad_00[0x64];
    int flags;
} Obj;

typedef void (*Handler)(Obj *);

typedef struct Slots {
    Obj *objs[12];
    Handler handlers[12];
} Slots;

void func_16FB20(Slots *s, int i)
{
    Obj *o;
    int w;

    o = s->objs[i];
    w = o->flags;
    w &= ~0x10;
    w &= ~0x20;
    w &= ~0x400;
    o->flags = w;
    if (s->handlers[i] != 0) {
        s->handlers[i](o);
    }
}
