/* LEVEL_23:0x051148 -- placement copy of LEVEL_01_057E20.c: runs one update of the chase object, then reports its displacement to the follow-up handlers. */
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

extern void *func_04FEF8(Obj *o);
extern void func_052D08(Obj *o);
extern void func_051230(Obj *o);
extern void func_050DA0(Obj *o, Vec3 *d);
extern void func_0352A0(Obj *o);
extern void func_0C0E50(int a);
extern void func_021D38(Obj *o, int a);

void func_051148(Obj *o)
{
    Vec3 old;
    Vec3 d;

    if (o->root == 0) {
        if (func_04FEF8(o) == 0) {
            return;
        }
    }
    Copy3(&old.x, &o->pos.x);
    func_052D08(o);
    func_051230(o);
    if (o->state != 9 && o->state != 5) {
        Sub3(&d.x, &o->pos.x, &old.x);
        func_050DA0(o, &d);
        func_0352A0(o);
        func_0C0E50(0x14);
        if (o->w_9A0 != 1) {
            func_021D38(o, 1);
        }
    }
}
