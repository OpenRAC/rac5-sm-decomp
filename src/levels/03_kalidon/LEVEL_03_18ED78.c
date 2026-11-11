/* LEVEL_03:0x18ED78 -- copies a position into each object of a returned list and nudges them vertically. */
typedef struct {
    float x;
    float y;
    float z;
} Vec18ED78;

typedef struct {
    char pad0[0x30];
    Vec18ED78 pos;
} Item18ED78;

typedef struct {
    char pad0[0x14];
    unsigned int count;
    char pad18[0x68];
    Item18ED78 *src[1];
} Info18ED78;

typedef struct {
    char pad0[0x20];
    Vec18ED78 vel;
    char pad2C[0x1A];
    unsigned char mode;
    char pad47[0xD];
    Info18ED78 *info;
    char pad58[0x18];
    float f70;
} Obj18ED78;

static inline void scale3(Vec18ED78 *d, Vec18ED78 *a, float k)
{
    d->x = k * a->x;
    d->y = k * a->y;
    d->z = k * a->z;
}

extern float D_002212D0;
extern float D_002212D4;
extern float D_002212D8[2];
extern Item18ED78 **func_18EBB0(Obj18ED78 *o);

void func_18ED78(Obj18ED78 *o)
{
    Vec18ED78 tmp;
    Info18ED78 *info;
    Item18ED78 **list;
    Item18ED78 **sp;
    Item18ED78 **lp;
    unsigned int i;
    float s;

    info = o->info;
    if (o->mode == 0)
        s = D_002212D4;
    else
        s = D_002212D0;
    scale3(&tmp, &o->vel, s);
    list = func_18EBB0(o);
    i = 0;
    if (info->count != 0) {
        lp = list;
        sp = info->src;
        do {
            Item18ED78 *d = *lp;
            if (d != 0) {
                Item18ED78 *r = *sp;
                Vec18ED78 *sv = &r->pos;
                Vec18ED78 *dv = &d->pos;
                d->pos.x = r->pos.x;
                dv->y = sv->y;
                dv->z = sv->z;
                d->pos.y += D_002212D8[o->mode & 1];
            }
            i++;
            sp++;
            lp++;
        } while (i < info->count);
    }
    o->f70 -= s;
}
