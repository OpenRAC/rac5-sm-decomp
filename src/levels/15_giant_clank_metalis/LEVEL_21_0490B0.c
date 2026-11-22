/* LEVEL_21:0x0490B0 -- placement copy of LEVEL_01_057E20.c: runs one update of the chase object, then reports its displacement to the follow-up handlers. */
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

extern void *func_047E60(Obj *o);
extern void func_04AC70(Obj *o);
extern void func_049198(Obj *o);
extern void func_048D08(Obj *o, Vec3 *d);
extern void func_02F6D8(Obj *o);
extern void func_0AA660(int a);
extern void func_01E018(Obj *o, int a);

void func_0490B0(Obj *o)
{
    Vec3 old;
    Vec3 d;

    if (o->root == 0) {
        if (func_047E60(o) == 0) {
            return;
        }
    }
    Copy3(&old.x, &o->pos.x);
    func_04AC70(o);
    func_049198(o);
    if (o->state != 9 && o->state != 5) {
        Sub3(&d.x, &o->pos.x, &old.x);
        func_048D08(o, &d);
        func_02F6D8(o);
        func_0AA660(0x14);
        if (o->w_9A0 != 1) {
            func_01E018(o, 1);
        }
    }
}
