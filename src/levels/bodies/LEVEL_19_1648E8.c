/* LEVEL_19:0x1648E8 -- placement copy of LEVEL_17_15C368.c: accumulates scaled basis vectors of an object into its attached transform block. */
typedef struct {
    float x;
    float y;
    float z;
} Vec15C368;

typedef struct {
    char pad0[0x30];
    Vec15C368 pos;
    char pad3C[0x1C4];
    Vec15C368 c200;
    char pad20C[4];
    Vec15C368 c210;
} Blk15C368;

typedef struct {
    Vec15C368 v0;
    char pad0C[4];
    Vec15C368 v10;
    char pad1C[4];
    Vec15C368 v20;
    char pad2C[4];
    Vec15C368 v30;
    char pad3C[0x1C];
    Blk15C368 **link;
} Obj15C368;

extern Vec15C368 D_001D6DF8;

static inline void madd(Vec15C368 *d, Vec15C368 *a, Vec15C368 *b, float k)
{
    d->x = a->x + b->x * k;
    d->y = a->y + b->y * k;
    d->z = a->z + b->z * k;
}

static inline void copy3(Vec15C368 *d, Vec15C368 *s)
{
    d->x = s->x;
    d->y = s->y;
    d->z = s->z;
}

void func_1648E8(Obj15C368 *o)
{
    Blk15C368 *b = *o->link;
    float k0 = D_001D6DF8.x;

    madd(&b->pos, &o->v30, &o->v0, k0);
    madd(&b->pos, &b->pos, &o->v10, D_001D6DF8.y);
    madd(&b->pos, &b->pos, &o->v20, D_001D6DF8.z);
    copy3(&b->c200, &o->v20);
    copy3(&b->c210, &o->v20);
}
