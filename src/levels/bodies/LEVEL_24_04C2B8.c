/* LEVEL_24:0x04C2B8 -- placement copy of LEVEL_01_053178.c: queues up to three effect requests: one from a looked-up record and two from a shared record depending on the current mode byte. */

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

extern struct Ent053178 *D_001D7A24;
extern struct Rec053178 *D_001C5440;
extern struct Cur053178 D_00204C48;

extern int func_07AC90(int a, int b, struct Loc053178 *l, int c);
extern void func_07B0B0(int a, struct Rec053178 *r, float *vec, int b, int c, int d, int e, int f, float x, float y, float z, float w);

static __inline__ void Spawn(int h, float *vec)
{
    struct Rec053178 *r;

    r = D_001C5440;
    if (r != 0) {
        func_07B0B0(h, r, vec, 0, 0, 0, 0, 1, r->f14, r->f18, r->f1C, r->f20);
    }
}

void func_04C2B8(struct Obj053178 *o)
{
    struct Loc053178 l;
    struct Rec053178 *r;
    struct Ent053178 *ent;

    if (func_07AC90(0, 0, &l, o->w59C) != 0) {
        ent = D_001D7A24 + l.idx;
        r = ent->rec8;
        if (r != 0) {
            func_07B0B0(o->w59C, r, D_00204C48.vec30, 0, 0, 0, 0, 1, r->f14, r->f18, r->f1C, r->f20);
        }
    }
    if (D_00204C48.p2C->b46 == 1) {
        Spawn(o->w59C, 0);
    }
    if (D_00204C48.p2C->b46 == 2) {
        Spawn(o->w59C, D_00204C48.vec30);
    }
}
