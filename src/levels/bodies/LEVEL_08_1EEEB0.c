/* LEVEL_08:0x1EEEB0 -- placement copy of LEVEL_04_1C5D30.c: gathers nearby entities with a flag raised, notifies each matching one and then fires the follow-up effect if any matched. */

typedef struct {
    float x;
    float y;
    float z;
} Vec3;

typedef struct {
    char pad_00[0x20];
    unsigned int id_20;
    char pad_24[0x10];
} Rec;

typedef struct {
    int w_00;
    Rec *recs_04;
} Tbl;

typedef struct {
    char pad_00[0x40];
    Tbl *tbl_40;
    unsigned char idx_44;
} Ent;

typedef struct {
    char pad_00[0xC];
    unsigned short flags_0C;
} Sub;

typedef struct {
    char pad_00[0x30];
    Vec3 pos_30;
    char pad_3C[0x1C];
    Sub *sub_58;
} Obj;

typedef struct {
    char pad_00[0x14];
    float f_14;
    float f_18;
    float f_1C;
    float f_20;
} Glob;

extern Glob *D_003EAA70;
extern unsigned int func_01CD60(Ent **buf, int max, Vec3 *pos, int a, int b, int c, int d);
extern void func_1EC7C0(Ent *e);
extern void func_088940(Obj *o, Glob *g, int a, int b, int c, int d, int e, int f, float f1, float f2, float f3, float f4);

static __inline__ void VecCopy(Vec3 *d, Vec3 *s)
{
    d->x = s->x;
    d->y = s->y;
    d->z = s->z;
}

void func_1EEEB0(Obj *o)
{
    Ent *list[32];
    Vec3 pos;
    Sub *s;
    Ent *e;
    Glob *g;
    unsigned int n;
    unsigned int i;
    int found;

    VecCopy(&pos, &o->pos_30);
    s = o->sub_58;
    s->flags_0C |= 8;
    n = func_01CD60(list, 0x20, &pos, 0xA9, 0x81, 4, 0);
    s->flags_0C &= ~8;
    if (n != 0) {
        found = 0;
        for (i = 0; i < n; i++) {
            e = list[i];
            if (e->tbl_40->recs_04[e->idx_44].id_20 == 0xCDE706C1) {
                func_1EC7C0(e);
                found = 1;
            }
        }
        if (found) {
            g = D_003EAA70;
            if (g != 0) {
                func_088940(o, g, 0, 0, 0, 0, 0, 1, g->f_14, g->f_18, g->f_1C, g->f_20);
            }
        }
    }
}
