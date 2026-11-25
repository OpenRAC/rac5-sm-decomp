/* LEVEL_17:0x170488 -- keeps an AI object's current target valid and picks a new one when it is lost: drops dead or wrong-kind targets, takes the nearest flagged record of kind 3 in the world list within the 100-unit start radius, and otherwise falls back to the nearest candidate that is visible and within range. Returns 1 when a target is set, else 0. */

typedef struct {
    float x;
    float y;
    float z;
} Vec3;

typedef struct {
    char pad_00[0x24];
    unsigned int tag_24;
} Tmpl;

typedef struct {
    char pad_00[0x2C];
    int w_2C;
} Info;

struct Rec;

typedef struct {
    char *obj_00;
    char pad_04[0x4C];
    struct Rec *target_50;
} State;

typedef struct Rec {
    char pad_00[0x30];
    Vec3 pos_30;
    char pad_3C[4];
    Tmpl *tmpl_40;
    char pad_44;
    unsigned char kind_45;
    char pad_46[0xE];
    Info *info_54;
    State *st_58;
    char pad_5C[8];
    unsigned int flags_64;
    char pad_68[0x18];
} Rec;

typedef struct {
    char pad_00[0x30];
    Vec3 pos_30;
    char pad_3C[0x560];
    int w_59C;
} Near;

typedef struct {
    char pad_00[0xC];
    Rec *recs_0C;
    char pad_10[0x20];
    int cnt_30;
} World;

extern World *D_001B1894;

extern int func_037C08(char *object);
extern int func_076C28(int a, float *pos);
extern Near *func_111F10(float *pos, float *outDist);

static __inline__ int HasTag(Rec *t)
{
    int r;

    r = 0;
    if (t != 0) {
        r = t->tmpl_40->tag_24 == 0xC9B607EE;
    }
    return r;
}

static __inline__ float Dist2(Vec3 *a, Vec3 *b)
{
    float dx;
    float dz;

    dx = a->x - b->x;
    dz = a->z - b->z;
    return dx * dx + dz * dz;
}

static __inline__ float Dist3(Vec3 *a, Vec3 *b)
{
    float dx;
    float dy;
    float dz;

    dx = a->x - b->x;
    dy = a->y - b->y;
    dz = a->z - b->z;
    return dx * dx + dy * dy + dz * dz;
}

static __inline__ void Copy3(Vec3 *d, Vec3 *s)
{
    d->x = s->x;
    d->y = s->y;
    d->z = s->z;
}

int func_170488(Rec *o)
{
    State *st;
    Info *info;
    Rec *t;
    Rec *rec;
    Rec *end;
    Rec *best;
    Near *near;
    float bestd;
    float d;
    float dist;
    unsigned char ok;
    int ret;
    Vec3 v;

    st = o->st_58;
    t = st->target_50;
    ok = HasTag(t);
    if (!ok && t != 0) {
        if (func_037C08(t->st_58->obj_00) != 0) {
            st->target_50 = 0;
        }
    }
    st = o->st_58;
    t = st->target_50;
    info = o->info_54;
    ok = HasTag(t);
    if (ok) {
        if (t->kind_45 != 3) {
            st->target_50 = 0;
        }
        if (st->target_50 != 0) {
            ret = 1;
            goto done;
        }
    }
    rec = D_001B1894->recs_0C;
    end = rec + D_001B1894->cnt_30;
    bestd = 100.0f;
    best = 0;
    for (; rec != end; rec++) {
        if ((rec->flags_64 & 1) != 0 && rec->kind_45 == 3) {
            d = Dist2(&rec->pos_30, &o->pos_30);
            if (d < bestd) {
                bestd = d;
                best = rec;
            }
        }
    }
    if (best != 0) {
        st->target_50 = best;
        ret = 1;
        goto done;
    }
    if (st->target_50 != 0) {
        if (func_037C08(st->target_50->st_58->obj_00) == 0) {
            if (func_076C28(info->w_2C, &st->target_50->pos_30.x) == 0 || 625.0f < Dist3(&o->pos_30, &st->target_50->pos_30)) {
                st->target_50 = 0;
            }
        } else {
            st->target_50 = 0;
        }
        if (st->target_50 != 0) {
            ret = 1;
            goto done;
        }
    }
    near = func_111F10(&o->pos_30.x, &dist);
    if (near != 0) {
        Copy3(&v, &near->pos_30);
        if (func_076C28(info->w_2C, &v.x) != 0 && dist <= 625.0f) {
            st->target_50 = (Rec *)near->w_59C;
            ret = 1;
            goto done;
        }
    }
    ret = 0;
done:
    return ret;
}
