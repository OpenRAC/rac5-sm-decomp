/* LEVEL_01:0x057E20 -- runs one update of the chase object, then reports its displacement to the follow-up handlers. */
typedef struct Vec3 {
    float x;
    float y;
    float z;
} Vec3;

typedef struct Obj {
    char pad_000[0x30];
    Vec3 pos;
    char pad_3C[0xCC];
    unsigned short state;
    char pad_10A[0x896];
    int w_9A0;
    char pad_9A4[0x300];
    void *root;
} Obj;

static __inline__ void Copy3(float *dst, float *src)
{
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
}

static __inline__ void Sub3(float *out, float *a, float *b)
{
    out[0] = a[0] - b[0];
    out[1] = a[1] - b[1];
    out[2] = a[2] - b[2];
}

extern void *func_056BD0(Obj *o);
extern void func_0599E0(Obj *o);
extern void func_057F08(Obj *o);
extern void func_057A78(Obj *o, Vec3 *d);
extern void func_03BE20(Obj *o);
extern void func_0CA018(int a);
extern void func_023B90(Obj *o, int a);

void func_057E20(Obj *o)
{
    Vec3 old;
    Vec3 d;

    if (o->root == 0) {
        if (func_056BD0(o) == 0) {
            return;
        }
    }
    Copy3(&old.x, &o->pos.x);
    func_0599E0(o);
    func_057F08(o);
    if (o->state != 9 && o->state != 5) {
        Sub3(&d.x, &o->pos.x, &old.x);
        func_057A78(o, &d);
        func_03BE20(o);
        func_0CA018(0x14);
        if (o->w_9A0 != 1) {
            func_023B90(o, 1);
        }
    }
}
