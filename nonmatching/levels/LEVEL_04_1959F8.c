/* USA LEVEL_04.REL:0x1959F8, 288-byte candidate (21 November 2026).
 * Measured pinned: 15 differing words; first difference at 0x30.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Vec3 {
    float x;
    float y;
    float z;
} Vec3;

typedef struct Ent {
    unsigned char kind_00;
    char pad_01[3];
    int w_04;
} Ent;

typedef struct Rec {
    char pad_00[0xC];
    Ent *ent_0C;
    char pad_10[0x34 - 0x10];
} Rec;

typedef struct Cfg {
    char pad_00[4];
    Rec *recs_04;
} Cfg;

typedef struct Obj {
    char pad_00[0x40];
    Cfg *cfg_40;
    unsigned char idx_44;
    char pad_45[0x58 - 0x45];
    char *blk_58;
} Obj;

typedef struct Out {
    char pad_00[8];
    float h_08;
} Out;

extern char D_0024F950[];
extern Vec3 D_0023C958;
extern void func_132058(Out *o, char *blk, Vec3 *v);
extern int func_01EBA0(float f, char *a, char *b, char *c, Vec3 *v, int w, int k, Obj *o);

int func_1959F8(Obj *o)
{
    Ent *e;
    Vec3 v;
    Out proj;
    char a[16];
    char b[16];
    char c[16];
    Vec3 *base;

    e = o->cfg_40->recs_04[o->idx_44].ent_0C;

    if (e != 0 && e->w_04 != 0) {
        base = (Vec3 *)(D_0024F950 + 0x30);
        v.x = base->x + D_0023C958.x;
        v.y = base->y + D_0023C958.y;
        v.z = base->z + D_0023C958.z;
        func_132058(&proj, o->blk_58 + 0x40, &v);
        if (!(proj.h_08 < 1.8f))
            return 0;
        if (!(-1.8f < proj.h_08))
            return 0;
        if (func_01EBA0(0.5f, c, a, b, &v, e->w_04, e->kind_00, o) != 0)
            return 1;
    }
    return 0;
}
