/* LEVEL_04:0x1C34F8 -- allocates a timed effect record owned by the object, fills its fields and positions it at the object position offset by a scaled constant vector. */

typedef struct {
    void *owner;
    int a;
    int b;
} Ctx;

typedef struct {
    float x;
    float y;
    float z;
} Vec3;

typedef struct {
    void (*fn_00)(void);
    char pad_04;
    unsigned char b_05;
    char pad_06[2];
    int w_08;
    Vec3 vec_0C;
    float f_18;
    unsigned int w_1C;
    Vec3 vec_20;
    float f_2C;
    Ctx ctx_30;
} Rec;

typedef struct {
    char pad_00[0x24];
    unsigned int w_24;
} Sub;

typedef struct {
    char pad_00[0x30];
    Vec3 pos_30;
    char pad_3C[0x1C];
    Sub *sub_58;
} Obj;

extern unsigned short D_002B25F4;
extern Vec3 D_00231808;
extern Rec *func_096CC0(int a, int b, unsigned short c, int d, int e);
extern void func_1C55C0(void);

static __inline__ void VecCopy(Vec3 *d, Vec3 *s)
{
    d->x = s->x;
    d->y = s->y;
    d->z = s->z;
}

static __inline__ void VecScale(Vec3 *d, Vec3 *s, float k)
{
    d->x = s->x * k;
    d->y = s->y * k;
    d->z = s->z * k;
}

static __inline__ void VecAdd(Vec3 *d, Vec3 *a, Vec3 *b)
{
    d->x = a->x + b->x;
    d->y = a->y + b->y;
    d->z = a->z + b->z;
}

void func_1C34F8(Obj *o, int a, int b)
{
    Rec *r;
    Sub *s;
    Ctx *c;
    Vec3 loc;

    s = o->sub_58;
    r = func_096CC0(1, 1, D_002B25F4, 0, 0);
    if (r != 0) {
        r->w_08 = s->w_24;
        r->w_1C = s->w_24 & 0xFFFFFF;
        r->fn_00 = func_1C55C0;
        r->f_18 = 0.6000000238418579f;
        r->f_2C = 0.6000000238418579f;
        r->b_05 = 1;
        c = &r->ctx_30;
        c->owner = o;
        c->b = a;
        c->a = b;
        VecScale(&loc, &D_00231808, 1.5f);
        VecCopy(&r->vec_0C, &o->pos_30);
        VecAdd(&r->vec_20, &o->pos_30, &loc);
    }
}
