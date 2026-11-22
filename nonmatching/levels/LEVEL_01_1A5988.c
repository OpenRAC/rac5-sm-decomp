/* USA LEVEL_01.REL:0x1A5988, 356-byte candidate (21 November 2026).
 * Measured pinned: 19 differing words; first difference at 0x5C.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Vec4 {
    float x;
    float y;
    float z;
    float w;
} Vec4;

typedef struct Fx {
    int mode;
    Vec4 v;
    float f_14;
    float f_18;
} Fx;

typedef struct Link {
    unsigned char on;
    char pad_01[3];
    Fx *fx;
} Link;

typedef struct Ent {
    char pad_00[0x10];
    int idle;
    char pad_14[0x14];
    float f_28;
} Ent;

typedef struct Tab {
    char pad_00[4];
    char *ents;
} Tab;

typedef struct Mat {
    float a[8];
    float b[4];
    float c[4];
} Mat;

typedef struct Rec {
    float a[8];
    float b[4];
    float c[4];
    char pad_40[0xC];
    int link;
} Rec;

typedef struct Obj {
    float a[8];
    float b[4];
    float c[4];
    Tab *tab;
    unsigned char sel;
    char pad_45[0xF];
    Rec *rec;
} Obj;

extern char *D_00206D94;
extern Vec4 D_00217E78;
extern Fx D_00397070;
extern Link D_00397098;

int func_1A5988(Obj *o)
{
    Rec *r;
    char *q;
    int link;

    r = o->rec;
    link = r->link;
    if (link != 0) {
        q = D_00206D94 + link;
        if (*(int *)(q + 0x40) == 0) {
            r->link = 0;
        } else {
            r->link = (int)q;
        }
    }
    if (((Ent *)(o->tab->ents + o->sel * 0x34))->idle == 0) {
        Fx *fx = &D_00397070;
        Link *lk = &D_00397098;
        Vec4 *g = &D_00217E78;
        Vec4 *dv = &fx->v;

        dv->w = g->w;
        fx->f_14 = 0.4f;
        D_00397098.on = 1;
        D_00397070.mode = 4;
        dv->y = g->y;
        dv->z = g->z;
        fx->f_18 = 1.0f;
        dv->x = g->x;
        lk->fx = fx;
        ((Ent *)(o->tab->ents + o->sel * 0x34))->f_28 = 0.5f;
    }
    r->b[0] = o->b[0];
    r->b[1] = o->b[1];
    r->b[2] = o->b[2];
    r->b[3] = o->b[3];
    r->a[0] = o->a[0];
    r->a[1] = o->a[1];
    r->a[2] = o->a[2];
    r->a[3] = o->a[3];
    r->a[4] = o->a[4];
    r->a[5] = o->a[5];
    r->a[6] = o->a[6];
    r->a[7] = o->a[7];
    r->c[0] = o->c[0];
    r->c[1] = o->c[1];
    r->c[2] = o->c[2];
    r->c[3] = o->c[3];
    return 1;
}
