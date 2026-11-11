/* LEVEL_20:0x0341C8 -- placement copy of LEVEL_16_03A0A8.c: per-frame object update: integrates velocity, resets per-frame state and rebuilds the transform. */
typedef struct {
    float x;
    float y;
    float z;
    float w;
} Vec4;

typedef struct {
    float f[9];
} Blob;

typedef struct {
    char pad00[0x64];
    unsigned int flags;
} Link;

typedef struct {
    char pad00[0x30];
    Vec4 pos;
    char pad40[0x40];
    float m80[16];
    char padC0[0x140];
    Vec4 v200;
    Vec4 v210;
    char pad220[0x58];
    Vec4 prev;
    char pad288[0x54];
    float f2DC;
    char pad2E0[0x2BC];
    Link *link;
    char pad5A0[0x3C0];
    unsigned long long flags960;
    char pad968[0x13C];
    Vec4 vel;
    Blob blob;
} Obj;

extern Vec4 D_0012DDA8;
extern Blob D_0012DD40;
extern float D_0012DD00[16];

extern void func_032060(Obj *o);
extern void func_032618(Obj *o);
extern void func_032928(Obj *o);
extern int func_02DA18(Obj *o);
extern void func_0DC7E8(Vec4 *a, Blob *b, Vec4 *c);
extern float *func_000D90(void);
extern int func_02D988(Obj *o);
extern void func_00D160(float *out);
extern void func_0DD148(float *a, float *b, float *c, float *d, float *e);
extern void func_02C238(Vec4 *pos, int flag);

static inline void CopyVec4(Vec4 *d, Vec4 *s)
{
    d->x = s->x;
    d->y = s->y;
    d->z = s->z;
    d->w = s->w;
}

static inline void CopyVec3(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
}

static inline void CopyMat(float *d, float *s)
{
    d[8] = s[8];
    d[9] = s[9];
    d[10] = s[10];
    d[11] = s[11];
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
    d[3] = s[3];
    d[4] = s[4];
    d[5] = s[5];
    d[6] = s[6];
    d[7] = s[7];
    d[12] = s[12];
    d[13] = s[13];
    d[14] = s[14];
    d[15] = s[15];
}

static inline void AddVec3(Vec4 *a, Vec4 *b)
{
    a->x += b->x;
    a->y += b->y;
    a->z += b->z;
}

void func_0341C8(Obj *o)
{
    float tmp[3];
    float *p;
    Vec4 *pos;

    func_032060(o);
    pos = &o->pos;
    CopyVec4(&o->prev, pos);
    func_032618(o);
    func_032928(o);
    if (func_02DA18(o) == 0) {
        AddVec3(pos, &o->vel);
        o->f2DC += o->vel.y;
    }
    CopyVec4(&o->vel, &D_0012DDA8);
    func_0DC7E8(&o->v200, &o->blob, &o->v200);
    func_0DC7E8(&o->v210, &o->blob, &o->v210);
    o->blob = D_0012DD40;
    if (func_000D90())
        p = func_000D90();
    else
        p = D_0012DD00;
    if (((int)(o->flags960 >> 52) & 1) && func_02D988(o)) {
        func_00D160(tmp);
        func_0DD148(&o->m80[0], &o->m80[4], tmp, p + 4, p);
        CopyVec3(&o->m80[8], tmp);
    } else {
        CopyMat(o->m80, p);
    }
    if (o->link)
        func_02C238(&o->pos, (o->link->flags & 0x400000) ? 7 : 6);
}
