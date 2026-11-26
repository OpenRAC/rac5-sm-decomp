/* LEVEL_16:0x157AC0 -- placement copy of LEVEL_01_17B608.c: bursts three debris pieces from a transformed spawn point: each is created from the shared class, placed, and launched outward at a random upward angle. */
typedef struct {
    float x;
    float y;
    float z;
    float w;
} Vec4;

typedef struct {
    char pad_00[0x24];
    int id_24;
    char pad_28[0x1C];
} Entry;

typedef struct {
    char pad_00[0x34];
    Entry *list_34;
    unsigned int count_38;
} Mgr;

typedef struct {
    char pad_00[0x24];
    int w_24;
} Body;

typedef struct {
    char pad_00[0x30];
    Vec4 pos_30;
    char pad_40[0x18];
    Body *body_58;
} Obj;

extern Mgr *D_001B48A0;
extern float D_001D4720[];
extern int D_001D4730[];
extern char D_001D4758[];
extern int D_001D4770[];
extern int rand(void);
extern float cosf(float x);
extern float sinf(float x);
extern float sqrtf(float x);
extern void func_1044F0(float *out, float *m, float *src);
extern void func_0DAC90(int a, float *v);
extern Obj *func_06F830(void *def, unsigned int key, int a, int b);
extern float func_06FE30(void *self, void *dst, int key);
extern void func_103D78(void *a, void *b, void *c);
extern void func_1882E8(Obj *o, void *w58, char *tab, void *buf, int m);

static __inline__ Entry *Find(int id)
{
    unsigned int i;

    for (i = 0; i < D_001B48A0->count_38; i++) {
        if (D_001B48A0->list_34[i].id_24 == id) {
            return &D_001B48A0->list_34[i];
        }
    }
    return 0;
}

static __inline__ float RandRange(float base, float range)
{
    return (float)rand() * 4.656612873077393e-10f * range + base;
}

static __inline__ Obj *Spawn(unsigned int key)
{
    Entry *e;

    e = Find(0xD35682F4);
    if (e == 0) {
        return 0;
    }
    return func_06F830(e, key, 0, 0xFF);
}

static __inline__ void SetLen2(Vec4 *v, float len)
{
    float d;

    d = v->x * v->x + v->z * v->z;
    if (d < 2.384185791015625e-07f) {
        return;
    }
    d = len / sqrtf(d);
    v->x = d * v->x;
    v->z = d * v->z;
}

void func_157AC0(float *m)
{
    float t[16];
    Vec4 d;
    unsigned int i;
    Obj *o;
    Body *b;
    float a;

    t[8] = m[8];
    t[9] = m[9];
    t[10] = m[10];
    t[11] = m[11];
    t[0] = m[0];
    t[1] = m[1];
    t[2] = m[2];
    t[3] = m[3];
    t[4] = m[4];
    t[5] = m[5];
    t[6] = m[6];
    t[7] = m[7];
    t[12] = m[12];
    t[13] = m[13];
    t[14] = m[14];
    t[15] = m[15];
    func_1044F0(&t[12], m, D_001D4720);
    t[15] = 1.0f;
    func_0DAC90(0x17, &t[12]);
    for (i = 0; i < 3; i++) {
        o = Spawn(D_001D4730[i]);
        if (o == 0) {
            continue;
        }
        func_06FE30(m, o, D_001D4770[i]);
        func_103D78(o, o, m);
        d.x = o->pos_30.x - t[12];
        d.z = o->pos_30.z - t[14];
        a = RandRange(0.7853981852531433f, 0.2617993950843811f);
        SetLen2(&d, cosf(a));
        d.y = sinf(a);
        b = o->body_58;
        b->w_24 = 0;
        func_1882E8(o, b, D_001D4758, &d, -1);
    }
}
