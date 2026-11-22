/* LEVEL_20:0x044B68 -- placement copy of LEVEL_01_050DD8.c: starts the object's pop effect: sets its mode and timer fields, starts the animation, spawns the pending marker if any, then fills the shared spawn record with the object's two basis rows and clears its tail before notifying the follow-up. */

typedef struct Obj Obj;

typedef struct {
    char pad_00[0x14];
    float f_14;
    float f_18;
    float f_1C;
    float f_20;
} Marker;

typedef struct {
    float a[4];
    float b[4];
    int w_20;
    int w_24;
    float f_28;
    float f_2C;
    float f_30;
    int w_34;
} Spawn;

struct Obj {
    char pad_00[0x30];
    float row0[4];
    char pad_40[0x1C0];
    float row1[4];
    char pad_210[0x15C];
    int w_36C;
    char pad_370[0x22C];
    Obj *anim_59C;
};

extern Spawn D_00142F28;
extern Marker *D_00104818;

extern void func_05ECB0(Obj *o, int a, int b, int c, float x, float y);
extern void func_0624D8(Obj *o, Marker *m, int e, int f, int g, int h, int i, int j, float a, float b, float c, float d);
extern void func_01E360(Obj *o, int a);

static __inline__ void Copy4(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
    d[3] = s[3];
}

void func_044B68(Obj *o)
{
    Marker *m;
    Obj *anim;
    float zero;

    *(short *)((char *)o + 0x108) = 1;
    D_00142F28.w_24 = 1;
    zero = 0.0f;
    o->w_36C = 0x20;
    func_05ECB0(o->anim_59C, 0x20, 0, 1, 0.20000000298023224f, zero);
    anim = o->anim_59C;
    m = D_00104818;
    if (m != 0) {
        func_0624D8(anim, m, 0, 0, 0, 0, 0, 1, m->f_14, m->f_18, m->f_1C, m->f_20);
    }
    D_00142F28.f_28 = zero;
    D_00142F28.f_2C = zero;
    D_00142F28.f_30 = zero;
    Copy4(D_00142F28.b, o->row1);
    Copy4(D_00142F28.a, o->row0);
    D_00142F28.w_34 = 0;
    func_01E360(o, 1);
}
