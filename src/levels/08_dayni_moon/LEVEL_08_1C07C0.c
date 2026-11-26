/* LEVEL_08:0x1C07C0 -- spawns a replacement entity of class 0x4FF0E803, copies configuration and flag bits, rewires parent references, and triggers an effect. */
typedef struct Vec3 {
    float x;
    float y;
    float z;
} Vec3;

typedef struct Copy2C {
    int w[11];
} Copy2C;

typedef struct Mob1C07C0 Mob1C07C0;

typedef struct Init54 {
    Copy2C copy00;
    int w2C;
    int w30;
    int w34;
    int w38;
    int pad3C;
    int w40;
    int w44;
    Mob1C07C0 *p48;
} Init54;

typedef struct Parent54 {
    Mob1C07C0 *arr00[8];
    unsigned char pad20[1];
    unsigned char b21;
} Parent54;

struct Mob1C07C0 {
    unsigned char pad00[0x45];
    unsigned char b45;
    unsigned char pad46[0xE];
    void *p54;
    unsigned char pad58[0xC];
    int flags64;
};

typedef struct ClassRec44 {
    unsigned char pad00[0x24];
    unsigned int id24;
    unsigned char pad28[0x1C];
} ClassRec44;

typedef struct Mgr1C07C0 {
    unsigned char pad00[0x34];
    ClassRec44 *recs34;
    unsigned int count38;
} Mgr1C07C0;

typedef struct EffectInfo {
    Vec3 pos;
    float f0C;
    float f10;
    float f14;
    float f18;
    void *p1C;
} EffectInfo;

extern Mgr1C07C0 *D_0024FC50;
extern Vec3 D_00271658;
extern int D_003E85F0;
extern void *D_00251E5C;

extern Mob1C07C0 *func_0844E0(ClassRec44 *cls, unsigned int id, Mob1C07C0 *src, int arg3);
extern unsigned char func_1C10C8(Mob1C07C0 *m);
extern void func_1C2638(Mob1C07C0 *m);
extern void func_1C0EC0(Mob1C07C0 *m);
extern void func_137108(Vec3 *out, Mob1C07C0 *m, Vec3 *off);
extern void func_110EE0(void *mgr, EffectInfo *info, int count, float f12, float f13);

static __inline__ ClassRec44 *FindClass(unsigned int id)
{
    Mgr1C07C0 *mgr = D_0024FC50;
    unsigned int i;

    for (i = 0; i < mgr->count38; i++) {
        if (mgr->recs34[i].id24 == id) {
            return &mgr->recs34[i];
        }
    }
    return 0;
}

static __inline__ void ReplaceChild(Parent54 *p54, Mob1C07C0 *src, Mob1C07C0 *m)
{
    unsigned int i;

    for (i = 0; i < p54->b21; i++) {
        if (p54->arr00[i] == src) {
            p54->arr00[i] = m;
            return;
        }
    }
}

void func_1C07C0(Mob1C07C0 *src, Copy2C *cfg, int a2, int a3, int a4, int a5, Mob1C07C0 *parent)
{
    ClassRec44 *cls = FindClass(0x4FF0E803U);
    Mob1C07C0 *m;

    if (cls == 0) {
        m = 0;
    } else {
        m = func_0844E0(cls, 0x4FF0E803U, src, 2);
    }

    if (m != 0) {
        Init54 *dst = (Init54 *)m->p54;
        EffectInfo info;

        dst->w2C = a3;
        dst->w30 = a2;
        dst->w34 = 0;
        dst->copy00 = *cfg;
        dst->w40 = a4;
        dst->w44 = a5;
        dst->w38 = 0;
        dst->p48 = parent;

        if (parent != 0) {
            ReplaceChild((Parent54 *)parent->p54, src, m);
        }

        m->b45 = 0;
        m->flags64 = (m->flags64 & ~0x10) | (src->flags64 & 0x10);
        m->flags64 = (m->flags64 & ~0x20) | (src->flags64 & 0x20);
        m->flags64 = (m->flags64 & ~0x40) | (src->flags64 & 0x40);
        m->b45 = func_1C10C8(m);
        func_1C2638(m);
        func_1C0EC0(m);
        func_137108(&info.pos, m, &D_00271658);
        info.f0C = 0.44999998807907104f;
        info.f10 = 0.6000000238418579f;
        info.f14 = -1.0f;
        info.f18 = 1.0f;
        info.p1C = &D_003E85F0;
        func_110EE0(D_00251E5C, &info, 100, 0.0f, 0.0f);
    }
}
