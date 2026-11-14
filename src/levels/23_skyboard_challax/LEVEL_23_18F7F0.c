/* LEVEL_23:0x18F7F0 -- placement copy of LEVEL_22_132BC8.c: initialises the object: runs two setup helpers, registers the handler in its owner and clears the first three bytes of its record; returns 1. */
typedef struct {
    char pad0[0xDC];
    void *handler;
} Owner;

typedef struct {
    unsigned char b0;
    unsigned char b1;
    unsigned char b2;
} Rec;

typedef struct {
    char pad0[0x45];
    unsigned char state;
    char pad46[2];
    Owner *owner;
    char pad4C[8];
    Rec *rec;
} Obj;

extern void func_056DA0(Obj *o);
extern void func_18FBB8(Obj *o, int state, int mode);
extern void func_190280(void);

int func_18F7F0(Obj *o)
{
    Rec *r;

    func_056DA0(o);
    func_18FBB8(o, o->state, 1);
    r = o->rec;
    o->owner->handler = (void *)func_190280;
    r->b1 = 0;
    r->b0 = 0;
    r->b2 = 0;
    return 1;
}
