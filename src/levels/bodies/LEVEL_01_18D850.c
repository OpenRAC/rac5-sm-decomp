/* LEVEL_01:0x18D850 -- per-state update of a spark emitter: releases a flag once ready, counts its timer down while emitting a spark with a camera ping, or hands over to the next stage. */
typedef struct {
    float f[4];
} Vec4;

typedef struct {
    float m[16];
} Matrix;

typedef struct {
    float v[4];
} Vector;

typedef struct Cam {
    char pad_00[0x14];
    float f14;
    float f18;
    float f1C;
    float f20;
} Cam;

typedef struct Obj {
    Matrix mat;
    char pad_40[5];
    unsigned char state;
    char pad_46[0x1E];
    int flags;
    char pad_68[8];
    float timer;
} Obj;

extern Cam *D_00208714;
extern Vector D_00223AA8;

extern int rand(void);
extern float func_07CA90(void *a0);
extern int func_07CAB8(char *a0, int a1);
extern void func_126100(Vec4 *dst, Matrix *mat, Vector *vec);
extern void func_0809D0(void *obj, Cam *cam, float a, float b, float c, float d, int p6, int p7, int p8, int p9, int p10, int p11);
extern void func_0DC120(float a, float b, float c, int d, Vec4 *e, int f, int g, int h, int i, unsigned int j);
extern void func_18DA70(Obj *o, int a);

static __inline__ int RandMod(int n)
{
    return rand() % n;
}

static __inline__ float RandRange(float lo, float hi)
{
    float range = hi - lo;

    return lo + range * ((float)rand() * (1.0f / 2147483648.0f));
}

void func_18D850(Obj *o)
{
    Vec4 v;
    float a;
    float b;

    switch (o->state) {
    case 1:
        if (func_07CA90(o) >= 1.2f) {
            o->flags = o->flags & ~0x20;
            o->flags = o->flags & ~0x40000;
        }
        break;
    case 2:
        if (o->timer <= 0.0f) {
            if (D_00208714 != 0) {
                func_0809D0(o, D_00208714, D_00208714->f14, D_00208714->f18, D_00208714->f1C, D_00208714->f20, 0, 0, 0, 0, 0, 1);
            }
            func_126100(&v, &o->mat, &D_00223AA8);
            a = RandRange(0.75f, 1.0f);
            b = RandRange(0.03f, 0.06f);
            func_0DC120(a, 0.0f, b, 0, &v, 0xAAFFFFFF, 0, 7, 0, 0xFFFFFFFF);
            o->timer = (float)(RandMod(15) + 15);
        }
        o->timer = o->timer - 1.0f;
        break;
    case 4:
        if (func_07CAB8((char *)o, 0) != 0) {
            func_18DA70(o, 0);
        }
        break;
    }
}
