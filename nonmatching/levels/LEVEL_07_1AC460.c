/* USA LEVEL_07.REL:0x1AC460 (21 November 2026): exact linked bytes under
 * pinned, held.
 * Its form stays out of the accepted set because a placement declares
 * func_1AD010 unlike its accepted definition.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
typedef struct Model {
    char pad_00[0x24];
    unsigned int tag_24;
} Model;

typedef struct Cand {
    char pad_00[0x40];
    Model *model_40;
    char pad_44[1];
    unsigned char state_45;
} Cand;

typedef struct Link {
    char pad_00[0x45];
    unsigned char dead_45;
} Link;

typedef struct Rec {
    char pad_00[8];
    Link *link_08;
    char pad_0C[5];
    unsigned char mode_11;
} Rec;

typedef struct Obj {
    char pad_00[0x54];
    Rec *rec_54;
    void *extra_58;
} Obj;

typedef struct Glob {
    char pad_00[0x334];
    Link *link_334;
    char pad_338[0x5A4 - 0x338];
    Cand *cand_5A4;
} Glob;

extern Glob D_0024AA40;
extern void func_1AD010(Obj *o, Cand *c, int a);
extern void func_1AC590(Obj *o, Rec *r, void *extra);
extern void func_1AC7C8(Obj *o, Rec *r, void *extra);

void func_1AC460(Obj *o)
{
    Rec *r;
    void *extra;
    Link *l;
    Cand *c;

    r = o->rec_54;
    extra = o->extra_58;
    if (r->mode_11 == 0) {
        l = r->link_08;
        if (l != 0 && l->dead_45 == 0) {
            c = D_0024AA40.cand_5A4;
            if (c != 0 && c->model_40->tag_24 == 0xEEC6E8BF && D_0024AA40.link_334 == l && c->state_45 == 10)
                func_1AD010(o, c, 1);
        }
    }
    if (r->mode_11 == 0)
        func_1AC590(o, r, extra);
    else if (r->mode_11 == 1)
        func_1AC7C8(o, r, extra);
}
