/* LEVEL_18:0x04F3E0 -- placement copy of LEVEL_01_057E20.c: runs one update of the chase object, then reports its displacement to the follow-up handlers. */
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

extern void *func_04E148(Obj *o);
extern void func_050E90(Obj *o);
extern void func_04F4C8(Obj *o);
extern void func_04F038(Obj *o, Vec3 *d);
extern void func_036608(Obj *o);
extern void func_0B83B8(int a);
extern void func_020B88(Obj *o, int a);

void func_04F3E0(Obj *o)
{
    Vec3 old;
    Vec3 d;

    if (o->root == 0) {
        if (func_04E148(o) == 0) {
            return;
        }
    }
    Copy3(&old.x, &o->pos.x);
    func_050E90(o);
    func_04F4C8(o);
    if (o->state != 9 && o->state != 5) {
        Sub3(&d.x, &o->pos.x, &old.x);
        func_04F038(o, &d);
        func_036608(o);
        func_0B83B8(0x14);
        if (o->w_9A0 != 1) {
            func_020B88(o, 1);
        }
    }
}
