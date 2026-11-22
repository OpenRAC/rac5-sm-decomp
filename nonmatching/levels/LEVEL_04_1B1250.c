/* USA LEVEL_04.REL:0x1B1250, 308-byte candidate (21 November 2026).
 * Measured pinned: 13 differing words; first difference at 0x1C.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Vec3 {
    float x;
    float y;
    float z;
} Vec3;

typedef struct Link {
    char pad00[0x64];
    unsigned int flags_64;
} Link;

typedef struct Ent {
    char pad00[4];
    int w_04;
    char pad08[0x2C];
} Ent;

typedef struct Cls {
    char pad00[4];
    Ent *ents_04;
} Cls;

typedef struct Rec {
    char pad00[0x7C4];
    char s_7C4[0x10];
    Vec3 dst_7D4;
    int flag_7E0;
    int step_7E4;
    float timer_7E8;
    Link *link_7EC;
    char pad7F0[0xC];
    Vec3 src_7FC;
} Rec;

typedef struct Obj {
    char pad00[0x40];
    Cls *cls_40;
    char pad44_;
    char pad45[0x13];
    Rec *rec_58;
} Obj;

extern void *D_0022231C;
extern float D_0023FCD0[];

extern void func_07FAE8(Obj *o, int a);
extern int func_084058(void *arg, void (*cb)(void *), unsigned int key);
extern void func_1B2188(void *p);
extern void func_1B3030(void *a, void *b, float f);
extern void func_1B13B0(Obj *o, int a);

static __inline__ void CopyVec(Vec3 *dst, Vec3 *src)
{
    dst->x = src->x;
    dst->y = src->y;
    dst->z = src->z;
}

void func_1B1250(Obj *o)
{
    Rec *r;
    Link *q;
    float t;
    int n;
    void *g;

    r = o->rec_58;
    q = r->link_7EC;
    if (q != 0) {
        if (q->flags_64 & 6) {
            r->link_7EC = 0;
        }
    }
    if (r->link_7EC == 0) {
        func_07FAE8(o, 1);
        return;
    }
    func_084058(o, func_1B2188, 3);
    n = r->step_7E4;
    if (n != 0) {
        t = r->timer_7E8 - 1.0f;
        r->timer_7E8 = t;
        if (t <= 0.0f) {
            r->step_7E4 = n - 1;
            if (r->flag_7E0 != 0) {
                g = D_0022231C;
                CopyVec(&r->dst_7D4, &r->src_7FC);
                func_1B3030(g, r->s_7C4, D_0023FCD0[r->step_7E4]);
            }
            r->timer_7E8 = 3.0f;
        }
    }
    func_1B13B0(o, o->cls_40->ents_04[*((unsigned char *)o + 0x44)].w_04);
}
