/* USA LEVEL_04.REL:0x1C50D8, 348-byte candidate (21 November 2026).
 * Measured pinned: 19 differing words; first difference at 0x64.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Vec3 {
    float x;
    float y;
    float z;
} Vec3;

typedef struct Cnt {
    char pad00[4];
    int n_04;
} Cnt;

typedef struct Part {
    char pad00[0x34];
    float y_34;
    char pad38[0x1C];
    Cnt *cnt_54;
} Part;

typedef struct Rec {
    char pad00[0xBE];
    unsigned char busy_BE;
} Rec;

typedef struct Obj {
    char pad00[0x20];
    Vec3 dir_20;
    float pad2C;
    Vec3 pos_30;
    char pad3C[0x1C];
    Rec *rec_58;
} Obj;

extern float fabsf(float x);

extern float func_1C5888(float a);
extern Part *func_1C5BA0(Obj *o, unsigned int key, float f, int a);
extern void func_1C5238(Obj *o, int a);
extern void func_1C6240(Obj *o);

static __inline__ void ScaleVec(Vec3 *out, Vec3 *in, float k)
{
    out->x = in->x * k;
    out->y = in->y * k;
    out->z = in->z * k;
}

static __inline__ void AddVec(Vec3 *a, Vec3 *b)
{
    a->x = a->x + b->x;
    a->y = a->y + b->y;
    a->z = a->z + b->z;
}

int func_1C50D8(Obj *o)
{
    Vec3 d;
    Part *p;
    unsigned char near;
    Cnt *c;

    if (o->rec_58->busy_BE != 0) {
        return 0;
    }
    if (func_1C5888(0.5f) != 0.0f) {
        p = func_1C5BA0(o, 0x4B929E8Fu, 1.0f, 0);
        if (p != 0) {
            near = fabsf(p->y_34 - o->pos_30.y) <= 0.15f;
        } else {
            near = 0;
        }
        if (p != 0 && near) {
            c = p->cnt_54;
            if (c->n_04 != 0) {
                c->n_04 = c->n_04 - 1;
            }
            func_1C5238(o, 0x1D);
        } else {
            func_1C5238(o, 2);
        }
        return 0;
    }
    ScaleVec(&d, &o->dir_20, 0.02500000223517418f);
    AddVec(&o->pos_30, &d);
    func_1C6240(o);
    return 1;
}
