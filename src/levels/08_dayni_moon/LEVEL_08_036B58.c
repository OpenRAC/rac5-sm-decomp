/* LEVEL_08:0x036B58 -- placement copy of LEVEL_02_036608.c: rebuilds the two attached frame transforms of an object and clears their dirty bits. */
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

extern const int D_00257790[];

extern float func_084F28(Obj *, Mat *, int);
extern void func_085008(Obj *, void *, int);
extern void func_036980(Obj *, void *, Item *, int);
extern void func_037A48(Obj *);

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

void func_036B58(Obj *obj)
{
    Mat m;
    float t[4];
    Sub *sub;
    Item *it;
    unsigned int idx;

    func_084F28(obj, &m, 4);
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
            func_085008(obj, &it->r3, D_00257790[idx]);
            it->w = 1.0f;
        }
        mask = ~0x20;
        sub->items[idx]->flags &= mask;
        func_085008(obj, t, D_00257790[idx]);
        func_036980(obj, t, it, idx);
    }
    Copy3(&sub->pos.x, &obj->v.x);
    Neg3(&sub->neg.x, &obj->v.x);
    func_037A48(obj);
}
