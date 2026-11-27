/* LEVEL_01:0x1CF9B0 -- moves an object along a waypoint list: steers towards the current point and advances to the next when it is close and in front; returns 1 when the last point is reached. */
typedef struct {
    float x, y, z, w;
} Vec4;

typedef struct {
    char pad00[4];
    char sub[4];
    unsigned char idx;
} Path;

typedef struct {
    char pad00[4];
    Vec4 *tbl;
    char pad08[0xC];
    unsigned short count;
} Table;

typedef struct {
    char pad00[0xC];
    float speed;
} Rec;

typedef struct {
    char pad00[0x20];
    float dir[3];
    char pad2C[4];
    float pos[3];
} Obj;

extern float sqrtf(float x);

extern void func_013878(Obj *o, Path *p, char *sub, Vec4 *d, Rec *rec);
extern int func_014058(int a0, int a1, int a2, float f);

static __inline__ void Mad3(float *d, float *a, float *b, float k)
{
    d[0] = a[0] + b[0] * k;
    d[1] = a[1] + b[1] * k;
    d[2] = a[2] + b[2] * k;
}

static __inline__ void Copy3(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
}

static __inline__ void NormXZ(Vec4 *d, float t)
{
    float one;

    if (!(t < 2.384185791015625e-07f)) {
        one = 1.0f;
        t = one / sqrtf(t);
        d->x = t * d->x;
        d->z = t * d->z;
    }
}

int func_1CF9B0(float range, Path *p, Obj *o, Table *t, Rec *rec)
{
    Vec4 d;
    Vec4 *pt;
    float l2;
    float x;

    d.y = 0.0f;
    d.w = 0.0f;
    pt = (Vec4 *)(((unsigned int)p->idx << 4) + (unsigned int)t->tbl);
    d.x = pt->x - o->pos[0];
    d.z = pt->z - o->pos[2];
    l2 = d.x * d.x + d.z * d.z;
    x = l2;
    range = range * range;
    if (l2 < range) {
        x = d.x * o->dir[0] + d.z * o->dir[2];
    }
    NormXZ(&d, l2);
    if (x <= 0.2f && (p->idx = p->idx + 1, (unsigned short)p->idx == t->count)) {
        Copy3(o->pos, &t->tbl[p->idx - 1].x);
        return 1;
    }
    func_013878(o, p, p->sub, &d, rec);
    Mad3(o->pos, o->pos, o->dir, rec->speed);
    func_014058((int)o->pos, 0, 1, 0.31f);
    return 0;
}
