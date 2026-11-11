/* LEVEL_03:0x1DCEF0 -- placement copy of LEVEL_01_1CC2D0.c: walks every element of an object, measures it, and fills its record with data written into a growing buffer. */

struct Rec1CC2D0 {
    unsigned char b0;
    unsigned char b1;
    unsigned char b2;
    unsigned char pad3;
    int w4;
};

struct Elem1CC2D0 {
    char pad0[0x44];
    unsigned char b44;
    char pad45[0x3B];
};

struct Ent1CC2D0 {
    char pad0[4];
    char x4[0xB8];
};

struct Set1CC2D0 {
    char pad0[0xC];
    struct Elem1CC2D0 *elems;
    char pad10[0x20];
    int count;
};

struct Obj1CC2D0 {
    char pad0[4];
    struct Set1CC2D0 *set;
    struct Ent1CC2D0 *ents;
    struct Rec1CC2D0 *recs;
};

extern char D_00244E80[];

extern void func_124060(unsigned char *out, struct Elem1CC2D0 *e, char *p);
extern int func_10D3B8(int a, int b, int c, char *file, int line);
extern int func_10D370(int p, int amount);
extern int func_1DC5F8(int cur, unsigned char *out2, struct Obj1CC2D0 *o, struct Ent1CC2D0 *ent, struct Elem1CC2D0 *e, unsigned char *out1, int mode);

void func_1DCEF0(struct Obj1CC2D0 *o)
{
    unsigned char loc1[16];
    unsigned char loc2[16];
    int cur;
    int lim;
    int base;
    struct Set1CC2D0 *set;
    struct Ent1CC2D0 *ents;
    struct Elem1CC2D0 *e;
    struct Elem1CC2D0 *end;
    struct Rec1CC2D0 *r;
    struct Ent1CC2D0 *ent;

    cur = 0;
    base = 0;
    lim = 0;
    set = o->set;
    ents = o->ents;
    e = set->elems;
    end = e + set->count;
    for (r = o->recs; e != end; e++, r++) {
        ent = &ents[e->b44];
        r->b0 = 0;
        func_124060(loc1, e, ent->x4);
        if (r->w4 == 0) {
            if (lim - cur < 0xA0) {
                lim = cur + 0xA0;
                if (base == 0) {
                    cur = func_10D3B8(16, 0xA0, 0, D_00244E80, 0x473);
                    base = cur;
                    lim = cur + 0xA0;
                } else {
                    func_10D370(base, lim - base);
                }
            }
            r->w4 = cur;
            cur = func_1DC5F8(cur, loc2, o, ent, e, loc1, 3);
            r->b2 = loc2[0];
        } else {
            func_1DC5F8(r->w4, loc2, o, ent, e, loc1, r->b2);
        }
        r->b1 = loc2[0];
    }
}
