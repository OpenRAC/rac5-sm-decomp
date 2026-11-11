/* LEVEL_19:0x148528 -- adds three scaled basis rows of a source matrix to its position into the target matrix, then copies the 3x3 rotation part. */

typedef struct {
    float x;
    float y;
    float z;
} Vec3;

typedef struct {
    Vec3 r0;
    float w0;
    Vec3 r1;
    float w1;
    Vec3 r2;
    float w2;
    Vec3 pos;
    float w3;
} Mat;

typedef struct {
    Mat *mat;
} Hold;

typedef struct {
    Mat mat;
    char pad_40[0x18];
    Hold *hold_58;
} Obj;

extern float D_001D4660[3];

static __inline__ void VecMadd(Vec3 *d, Vec3 *a, Vec3 *b, float k)
{
    d->x = a->x + b->x * k;
    d->y = a->y + b->y * k;
    d->z = a->z + b->z * k;
}

static __inline__ void VecCopy(Vec3 *d, Vec3 *s)
{
    d->x = s->x;
    d->y = s->y;
    d->z = s->z;
}

void func_148528(Obj *o)
{
    Mat *d;

    d = o->hold_58->mat;
    VecMadd(&d->pos, &o->mat.pos, &o->mat.r0, D_001D4660[0]);
    VecMadd(&d->pos, &d->pos, &o->mat.r1, D_001D4660[1]);
    VecMadd(&d->pos, &d->pos, &o->mat.r2, D_001D4660[2]);
    VecCopy(&d->r0, &o->mat.r0);
    VecCopy(&d->r1, &o->mat.r1);
    VecCopy(&d->r2, &o->mat.r2);
}
