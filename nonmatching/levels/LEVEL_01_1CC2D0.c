/* LEVEL_01.REL:0x1CC2D0: reviewed 368-byte candidate, held for ABI review.
 * Walks every element of an object, measures it, and fills its record with
 * data written into a growing buffer.
 * pinned C with gnu-ee-trial links 368/368 bytes and is byte-exact at this and
 * 13 other USA placements, but the prototypes disagree.
 * It declares func_10F6A8 returning void with (int, int), but the accepted
 * LEVEL_01_10F6A8.c defines it returning int with (long long, int).
 * It declares func_1CB9D8 returning int with (int, pointer, pointer, pointer,
 * pointer, pointer, int), but the accepted LEVEL_01_1CB9D8.c defines it
 * returning pointer with (int, int, int, pointer, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
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

extern char D_0022A410[];

extern void func_125E78(unsigned char *out, struct Elem1CC2D0 *e, char *p);
extern int func_10F6F0(int a, int b, int c, char *file, int line);
extern void func_10F6A8(int p, int n);
extern int func_1CB9D8(int cur, unsigned char *out2, struct Obj1CC2D0 *o, struct Ent1CC2D0 *ent, struct Elem1CC2D0 *e, unsigned char *out1, int mode);

void func_1CC2D0(struct Obj1CC2D0 *o)
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
        func_125E78(loc1, e, ent->x4);
        if (r->w4 == 0) {
            if (lim - cur < 0xA0) {
                lim = cur + 0xA0;
                if (base == 0) {
                    cur = func_10F6F0(16, 0xA0, 0, D_0022A410, 0x473);
                    base = cur;
                    lim = cur + 0xA0;
                } else {
                    func_10F6A8(base, lim - base);
                }
            }
            r->w4 = cur;
            cur = func_1CB9D8(cur, loc2, o, ent, e, loc1, 3);
            r->b2 = loc2[0];
        } else {
            func_1CB9D8(r->w4, loc2, o, ent, e, loc1, r->b2);
        }
        r->b1 = loc2[0];
    }
}
