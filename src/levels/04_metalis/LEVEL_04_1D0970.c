/* LEVEL_04:0x1D0970 -- placement copy of LEVEL_01_1BDAB0.c: checks two probe points in front of an object against the world and advances its state, retrying or giving up. */

typedef struct {
    float x;
    float y;
    float z;
} Vec3;

typedef struct {
    float m[16];
} Mat4;

typedef struct Ref {
    unsigned short idx;
    char pad_02;
    unsigned char list;
} Ref;

typedef struct Item {
    char pad_00[8];
    unsigned short flags;
    char pad_0A[6];
} Item;

typedef struct Group {
    char pad_00[0x64];
    Item *items;
} Group;

typedef struct Inst {
    Ref ref;
    char pad_04[0x40];
    float target[3];
} Inst;

typedef struct Blk {
    char pad_00[0x5C];
    unsigned char step;
} Blk;

typedef struct Obj {
    char pad_00[0x54];
    Blk *blk;
    Inst *inst;
} Obj;

extern float D_002430B0[];
extern Group D_00249EF8[];

extern float func_07FF08(void *a0);
extern void func_132058(Vec3 *dst, Mat4 *mat, Vec3 *v);
extern int func_0269C8(float *obj, float *p);
extern int func_07FF30(char *a0, int a1);
extern void func_1D0C00(Obj *o, int code);
extern void func_1D2148(Obj *o, Vec3 *v, float *pos);

static __inline__ void Mark(Ref *r)
{
    Item *it;

    if (r->idx != 0xFFFF) {
        it = (Item *)((char *)D_00249EF8[r->list].items + (r->idx << 4));
        it->flags |= 8;
    }
}

static __inline__ void Unmark(Ref *r)
{
    Item *it;

    if (r->idx != 0xFFFF) {
        it = (Item *)((char *)D_00249EF8[r->list].items + (r->idx << 4));
        it->flags &= ~8;
    }
}

static __inline__ unsigned char Probe(Ref *ref, float *v, float *p)
{
    int r;

    Mark(ref);
    r = func_0269C8(v, p);
    Unmark(ref);
    return r;
}

void func_1D0970(Obj *obj)
{
    Vec3 a;
    Vec3 b;
    Vec3 *pb;
    Blk *blk;
    Inst *inst;
    float f;
    float *tp;
    unsigned char ok;

    blk = obj->blk;
    inst = obj->inst;
    f = func_07FF08(obj);
    if (blk->step < 2 && D_002430B0[blk->step] <= f) {
        tp = inst->target;
        a.x = -0.608f;
        a.y = 1.304f;
        a.z = 1.149f;
        func_132058(&a, (Mat4 *)obj, &a);
        ok = Probe(&inst->ref, &a.x, tp);
        if (!ok) {
            func_1D0C00(obj, 0x12);
            return;
        }
        pb = &b;
        pb->x = 0.588f;
        pb->y = 1.274f;
        pb->z = 1.149f;
        func_132058(pb, (Mat4 *)obj, pb);
        ok = Probe(&inst->ref, &pb->x, tp);
        if (!ok) {
            func_1D0C00(obj, 0x12);
            return;
        }
        func_1D2148(obj, pb, tp);
        func_1D2148(obj, &a, tp);
        blk->step = blk->step + 1;
    }
    if (func_07FF30((char *)obj, 0) != 0)
        func_1D0C00(obj, 0x14);
}
