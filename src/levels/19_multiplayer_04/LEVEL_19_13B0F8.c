/* LEVEL_19:0x13B0F8 -- placement copy of LEVEL_07_15F670.c: resets the object's linked record, starts its current state and copies a byte from the second link; returns 1. */
extern void *memset(void *p, int c, unsigned int n);
extern void func_13B508(void *o, int state);

typedef struct {
    char pad00[0x74];
    int f74;
} Rec;

typedef struct {
    char pad00[0xC];
    unsigned char b0C;
} Link;

typedef struct {
    char pad00[0x45];
    unsigned char state;
    char pad46[0xE];
    Link *link;
    Rec *rec;
    char pad5C[0x1A];
    unsigned char b76;
} Obj;

int func_13B0F8(Obj *o)
{
    Rec *r = o->rec;
    Link *l = o->link;

    memset(r, 0, 0x78);
    func_13B508(o, o->state);
    r->f74 = o->state;
    o->b76 = l->b0C;
    return 1;
}
