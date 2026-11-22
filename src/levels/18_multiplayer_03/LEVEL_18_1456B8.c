/* LEVEL_18:0x1456B8 -- picks a spawn point near an object (up to ten random tries, then falls back to the object's own position). */
typedef struct {
    float x, y, z, w;
} Vec4;

typedef struct {
    float x, y, z;
} Vec3;

typedef struct {
    float x;
    float z;
    char pad08[0x2C];
    int src;
    char pad38[4];
    unsigned char flag;
} Slot;

typedef struct {
    char pad00[0x30];
    Vec3 pos;
    char pad3C[0x18];
    Slot *slot;
} Obj;

typedef struct {
    char pad00[0xC];
    float f0C;
} Glob;

extern Glob D_001DE778;

extern int rand(void);
extern float cosf(float x);
extern float sinf(float x);
extern float fabsf(float x);
extern void *memset(void *p, int c, unsigned int n);

extern void func_0762F0(int src, Vec4 *p);
extern int func_02DB40(Slot *s, Vec4 *p, int flag);
extern void func_01DAC8(float y, float *dist, void *buf, Vec4 *p, int n, int m);
extern int func_1459B0(Obj *o, Vec4 *p);

static __inline__ int approx(float a, float b)
{
    int r = 1;

    if (!(fabsf(a - b) <= 1.0e-5f)) {
        r = 0;
    }
    return r;
}

static __inline__ float RandRange(float lo, float hi)
{
    float d = hi - lo;

    return lo + d * ((float)rand() * 4.656613e-10f);
}

static __inline__ void Place(Vec4 *d, Vec3 *c, float r)
{
    d->x = d->x * r + c->x;
    d->z = d->z * r;
    d->z = d->z + c->z;
}

int func_1456B8(Obj *o)
{
    Vec4 pos;
    Vec4 prev;
    Vec4 d;
    char buf[32];
    float dist;
    float *pd;
    Slot *s;
    Glob *g;
    float t;
    float r;
    unsigned char ok;
    unsigned int i;

    s = o->slot;
    g = &D_001DE778;
    pd = &dist;
    i = 0;
    do {
        memset(&pos, 0, 16);
        pos.w = 1.0f;
        if (s->src == 0) {
            t = (float)rand();
            t = t * 4.656613e-10f;
            t = t + t;
            t = t * 3.1415927f;
            pos.x = cosf(t);
            pos.z = sinf(t);
            r = RandRange(5.0f, 10.0f);
            Place(&pos, &o->pos, r);
        } else {
            func_0762F0(s->src, &pos);
            pos.y = o->pos.y;
        }
        prev.x = pos.x;
        prev.y = pos.z;
        func_02DB40(s, &pos, 0);
        if (s->flag != 0) {
            ok = approx(prev.x, pos.x);
            if (!ok) {
                ok = approx(prev.y, pos.z);
                if (!ok) {
                    d.x = prev.x - pos.x;
                    d.y = prev.y - pos.z;
                    pos.x = pos.x + d.x * 0.4f;
                    pos.z = pos.z + d.y * 0.4f;
                }
            }
        }
        pos.y = o->pos.y + 0.25f;
        dist = 100.0f;
        func_01DAC8(pos.y - g->f0C, pd, buf, &pos, 0x28, 0);
        if (!(0.5f < dist)) {
            if (func_1459B0(o, &pos) != 0) {
                s->x = pos.x;
                s->z = pos.z;
                return 1;
            }
        }
        i++;
    } while (i < 10);
    memset(&pos, 0, 16);
    pos.w = 1.0f;
    pos.x = o->pos.x;
    pos.z = o->pos.z;
    func_02DB40(s, &pos, 0);
    s->x = pos.x;
    s->z = pos.z;
    return 0;
}
