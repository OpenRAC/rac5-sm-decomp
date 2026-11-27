/* LEVEL_08:0x1B0D50 -- gathers the nearby objects inside a box around the object whose type can be probed, keeps up to 32 that pass the probe test and notifies each of them (the player gets a direct call, the others a virtual probe). */
typedef struct {
    float r[3];
} Radius;

typedef struct {
    char pad_00[0x68];
} Pool;

typedef struct Tgt Tgt;

typedef struct Hit {
    unsigned char kind_00;
    char pad_01[3];
    int val_04;
} Hit;

typedef struct {
    char pad_00[0x10];
    Hit *hit_10;
    char pad_14[0x20];
} Rec;

typedef struct {
    char pad_00[4];
    Rec *recs_04;
    char pad_08[0x18];
    int (*probe_20)(Tgt *t, int a, int b, int c, void *p, void *o, float f);
} VTable;

struct Tgt {
    char pad_00[0x30];
    float pos_30[3];
    char pad_3C[4];
    VTable *vt_40;
    unsigned char idx_44;
};

typedef struct {
    Tgt *target_00;
    Tgt *obj_04;
} Entry;

typedef struct {
    char pad_00[0x30];
    float pos_30[3];
} Obj;

typedef struct {
    char pad_00[0x59C];
    Tgt *player_59C;
} World;

extern const Radius D_0026F808;
extern Pool D_0027E978[2];
extern Entry **D_0027EA48;
extern World D_002843D0;
extern char D_00261B18[];

extern int func_09D9C0(Entry **list, Pool *pool, float *lo, float *hi, int a, int b);
extern int func_01FD28(float r, float *q, int a, int b, Tgt *t);
extern void func_0416A0(int id);

static __inline__ void Box(float *lo, float *hi, float *c, const Radius *r)
{
    lo[0] = c[0] - r->r[0];
    lo[1] = c[1] - r->r[1];
    lo[2] = c[2] - r->r[2];
    hi[0] = c[0] + r->r[0];
    hi[1] = c[1] + r->r[1];
    hi[2] = c[2] + r->r[2];
}

static __inline__ Entry **Gather(Entry **cur, float *lo, float *hi, int a, int b)
{
    Pool *e;

    e = D_0027E978;
    do {
        cur += func_09D9C0(cur, e, lo, hi, a, b);
        e++;
    } while (e < D_0027E978 + 2);
    return cur;
}

void func_1B0D50(Obj *o)
{
    float v[4];
    float hi[4];
    Tgt *found[32];
    Entry **cursor;
    Entry **end;
    Entry **p;
    Tgt *t;
    Tgt *player;
    Hit *h;
    int off;
    int i;
    int count;
    int n;

    Box(v, hi, o->pos_30, &D_0026F808);
    cursor = Gather(D_0027EA48, v, hi, 0x129, 0x101);
    player = D_002843D0.player_59C;
    n = cursor - D_0027EA48;
    p = D_0027EA48;
    end = p + n;
    count = 0;
    for (; p != end; p++) {
        t = (*p)->obj_04;
        off = t->idx_44 * 0x34;
        h = ((Rec *)((char *)t->vt_40->recs_04 + off))->hit_10;
        if (t->vt_40->probe_20 != 0) {
            v[0] = t->pos_30[0];
            v[1] = t->pos_30[1];
            v[3] = 1.0f;
            v[2] = o->pos_30[2];
            if (func_01FD28(D_0026F808.r[2], v, h->val_04, h->kind_00, t)) {
                found[count] = t;
                count++;
                if (count >= 32) {
                    break;
                }
            }
        }
    }
    for (i = 0; i < count; i++) {
        if (found[i] == player) {
            func_0416A0(0x2A);
        } else {
            found[i]->vt_40->probe_20(found[i], 2, 3, 0, D_00261B18, o, 100.0f);
        }
    }
}
