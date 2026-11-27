/* LEVEL_02:0x036608 -- rebuilds the two attached frame transforms of an object and clears their dirty bits. */
typedef struct {
    float x, y, z;
} V3;

typedef struct {
    V3 r0;
    float p0;
    V3 r1;
    float p1;
    V3 r2;
    float p2;
    V3 r3;
    float w;
    char pad40[5];
    unsigned char state;
    char pad46[0x1E];
    int flags;
} Item;

typedef struct {
    V3 r0;
    float p0;
    V3 r1;
    float p1;
    V3 r2;
    float p2;
    float pad[4];
} Mat;

typedef struct {
    char pad0[4];
    Item *items[2];
    char padC[0x54 - 0xC];
    V3 neg;
    V3 pos;
} Sub;

typedef struct {
    V3 v;
    char padC[0x58 - 0xC];
    Sub *sub;
} Obj;

extern const int D_00222A90[];

extern float func_083888(Obj *, Mat *, int);
extern void func_083968(Obj *, void *, int);
extern void func_0364B8(Obj *, void *, Item *, int);
extern void func_037308(Obj *);

static __inline__ void Neg3(float *d, float *s)
{
    d[0] = -s[0];
    d[1] = -s[1];
    d[2] = -s[2];
}

static __inline__ void Copy3(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
}

void func_036608(Obj *obj)
{
    Mat m;
    float t[4];
    Sub *sub;
    Item *it;
    unsigned int idx;

    func_083888(obj, &m, 4);
    sub = obj->sub;
    for (idx = 0; idx < 2; idx++) {
        int mask;

        it = sub->items[idx];
        if (it == 0)
            continue;
        if ((unsigned int)(it->state - 2) >= 2 && it->state != 5) {
            Neg3(&it->r0.x, &m.r1.x);
            Copy3(&it->r1.x, &m.r2.x);
            Copy3(&it->r2.x, &m.r0.x);
            func_083968(obj, &it->r3, D_00222A90[idx]);
            it->w = 1.0f;
        }
        mask = ~0x20;
        sub->items[idx]->flags &= mask;
        func_083968(obj, t, D_00222A90[idx]);
        func_0364B8(obj, t, it, idx);
    }
    Copy3(&sub->pos.x, &obj->v.x);
    Neg3(&sub->neg.x, &obj->v.x);
    func_037308(obj);
}
