/* LEVEL_17:0x164B80 -- placement copy of LEVEL_16_16E3E0.c: initializes a level prop entity, resolves its global sound handle, reorients its basis matrix, and registers collision. */
extern void *memset(void *s, int c, unsigned int n);

typedef struct Vec3 {
    float x;
    float y;
    float z;
} Vec3;

typedef struct Vec4 {
    float x;
    float y;
    float z;
    float w;
} Vec4;

typedef struct Copy24 {
    int w[9];
} Copy24;

typedef struct State58 {
    int pad00[2];
    float f08;
    int pad0C[3];
    float f18;
    int pad1C;
    unsigned char b20;
    unsigned char pad21[3];
} State58;

typedef struct Mob16E3E0 {
    Vec4 row00;
    Vec4 row10;
    Vec4 row20;
    Vec4 pos30;
    unsigned char pad40[6];
    unsigned char b46;
    unsigned char pad47[0x11];
    State58 *p58;
    unsigned char pad5C[0xC];
    unsigned int w68;
    unsigned char pad6C[0xB];
    unsigned char b77;
} Mob16E3E0;

typedef struct SndPtr {
    void *p;
} SndPtr;

extern SndPtr D_001B17D4;
extern unsigned char D_001B17DC;
extern Copy24 D_001C8FA0;

extern void *GLOBALWAD_FindGlobalSound__FUi(unsigned int id);
extern void func_103708(Mob16E3E0 *a0, Mob16E3E0 *a1, Copy24 *cfg);

static __inline__ void CopyVec3(Vec4 *dst, Vec4 *src)
{
    dst->x = src->x;
    dst->y = src->y;
    dst->z = src->z;
}

static __inline__ void NegVec3(Vec4 *dst, Vec4 *src)
{
    dst->x = -src->x;
    dst->y = -src->y;
    dst->z = -src->z;
}

int func_164B80(Mob16E3E0 *o)
{
    Copy24 cfg;
    Vec4 tmp0;
    Vec4 tmp1;
    Vec4 tmp2;
    State58 *s0;

    o->b46 = 3;
    o->b77 = 0x40;
    o->w68 = 0xFFFFFFFFU;

    if (D_001B17D4.p == 0) {
        D_001B17D4.p = GLOBALWAD_FindGlobalSound__FUi(0x732E6C14U);
        if (D_001B17D4.p == 0 && D_001B17DC == 0) {
            D_001B17DC = 1;
        }
    }

    s0 = o->p58;
    memset(s0, 0, sizeof(State58));
    s0->b20 = 1;
    s0->f08 = 255.0f;
    s0->f18 = o->pos30.y;

    cfg = D_001C8FA0;
    o->pos30.y += 0.6000000238418579f;

    CopyVec3(&tmp0, &o->row10);
    NegVec3(&tmp1, &o->row20);
    NegVec3(&tmp2, &o->row00);

    CopyVec3(&o->row00, &tmp0);
    CopyVec3(&o->row10, &tmp1);
    CopyVec3(&o->row20, &tmp2);

    func_103708(o, o, &cfg);
    return 1;
}
