/* LEVEL_22:0x048970 -- placement copy of LEVEL_01_053178.c: queues up to three effect requests: one from a looked-up record and two from a shared record depending on the current mode byte. */

struct Rec053178 {
    char pad00[0x14];
    float f14;
    float f18;
    float f1C;
    float f20;
};

struct Ent053178 {
    char pad00[0x08];
    struct Rec053178 *rec8;
    char pad0C[0x04];
};

struct Mode053178 {
    char pad00[0x46];
    unsigned char b46;
};

struct Cur053178 {
    char pad00[0x2C];
    struct Mode053178 *p2C;
    float vec30[3];
};

struct Loc053178 {
    char pad00[0x0E];
    unsigned short idx;
    char pad10[0x10];
};

struct Obj053178 {
    char pad00[0x59C];
    int w59C;
};

extern struct Ent053178 *D_00165D84;
extern struct Rec053178 *D_00153B40;
extern struct Cur053178 D_0018A948;

extern int func_072F88(int a, int b, struct Loc053178 *l, int c);
extern void func_0733A8(int a, struct Rec053178 *r, float *vec, int b, int c, int d, int e, int f, float x, float y, float z, float w);

static __inline__ void Spawn(int h, float *vec)
{
    struct Rec053178 *r;

    r = D_00153B40;
    if (r != 0) {
        func_0733A8(h, r, vec, 0, 0, 0, 0, 1, r->f14, r->f18, r->f1C, r->f20);
    }
}

void func_048970(struct Obj053178 *o)
{
    struct Loc053178 l;
    struct Rec053178 *r;
    struct Ent053178 *ent;

    if (func_072F88(0, 0, &l, o->w59C) != 0) {
        ent = D_00165D84 + l.idx;
        r = ent->rec8;
        if (r != 0) {
            func_0733A8(o->w59C, r, D_0018A948.vec30, 0, 0, 0, 0, 1, r->f14, r->f18, r->f1C, r->f20);
        }
    }
    if (D_0018A948.p2C->b46 == 1) {
        Spawn(o->w59C, 0);
    }
    if (D_0018A948.p2C->b46 == 2) {
        Spawn(o->w59C, D_0018A948.vec30);
    }
}
