/* LEVEL_08:0x202D18 -- walks every inner node of every registered group, probes its position and, for each hit, hands a pooled record with the inverse length of the node's direction to the spawner; finally reports the collected result through the shared finisher. */
typedef struct {
    float x, y, z, w;
} Vec4;

typedef struct {
    int i0;
    int i4;
    char pad0[0x80 - 0x8];
    float f80;
} Rec;

typedef struct {
    char pad0[8];
    char *cursor;
} Pool;

typedef struct {
    char pad0[0x11C];
    Pool *pool;
} Owner;

typedef struct Inner {
    char pad0[0x20];
    float v20[3];
    float w2C;
    float p30[3];
    char pad3C[0x48 - 0x3C];
    struct Inner *next;
    Owner *owner;
} Inner;

typedef struct {
    Inner *head;
} Group;

typedef struct Outer {
    struct Outer *next;
    char pad4[8];
    Group *group;
} Outer;

typedef struct {
    char pad0[8];
    Outer *outer;
    char padC[0x1C - 0xC];
    int ctx;
    char pad20[0x24 - 0x20];
    char x24[0x3C - 0x24];
    char x3C[1];
} Obj;

typedef struct {
    int w0;
} Shared;

static __inline__ void Copy3(float *dst, float *src)
{
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
}

extern Shared *D_0024FC50;
extern float sqrtf(float x);
extern int func_20FC98(int *out, char *p);
extern int func_0833E8(Vec4 *q);
extern void func_039160(Rec *a0, int a1, int a2, int a3, int a4, float f12);
extern void func_20FD90(int a, char *b, int c, int d, int e);

void func_202D18(Obj *o)
{
    Outer *n;
    Inner *m;
    Vec4 q;
    int r[4];
    int ctx;
    int tag;
    int res;
    int hit;
    char *rec;
    char *p24;
    float len2;
    float inv;

    q.w = 2.0f;
    p24 = o->x24;
    ctx = o->ctx;
    tag = D_0024FC50->w0;
    res = func_20FC98(r, o->x3C);
    for (n = o->outer; n != 0; n = n->next) {
        for (m = n->group->head; m != 0; m = m->next) {
            if (m->owner != 0) {
                Copy3(&q.x, m->p30);
                hit = func_0833E8(&q);
                if (hit != 0) {
                    len2 = m->v20[0] * m->v20[0] + m->v20[1] * m->v20[1] + m->v20[2] * m->v20[2];
                    inv = 1.0f / sqrtf(len2);
                    rec = m->owner->pool->cursor;
                    m->owner->pool->cursor = rec + 0x90;
                    func_039160((Rec *)rec, ctx, (int)m, tag, hit, inv);
                }
            }
        }
    }
    func_20FD90(ctx, p24, 1, res, r[0]);
}
