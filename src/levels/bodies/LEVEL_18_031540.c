/* LEVEL_18:0x031540 -- placement copy of LEVEL_08_03B970.c: allocates and fills one projectile record with randomized heading. */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

typedef struct {
    Vec3 v0;
    Vec3 v1;
    Vec3 v2;
    Vec3 v3;
    char pad30[0x38];
    int w68;
    float f6C;
    float f70;
    float f74;
    char pad78[4];
    unsigned int w7C;
    int w80;
} Rec;

typedef struct {
    char pad00[0x14];
    float f14;
    float f18;
    char pad1C[0xC];
    char b28[1];
} Link;

typedef struct {
    char pad00[0x1C];
    Link *link;
} Owner;

extern unsigned int *D_001B5D20;
extern char D_001E3E88[];

extern int rand(void);
extern float cosf(float);
extern float sqrtf(float);
extern float fabsf(float);
extern Rec *func_08DEE8(int *n, Owner *o, int k);
extern void func_1004F8(float *out, float a, float b);
extern void func_02B580(void *a, void *b, void *c, void *d, void *e, float s, float c2);

static inline float RandStep(float x)
{
    float q = (float)(int)(x * 7.826379260222893e-06f);

    return fabsf((x - q * 127773.0f) * 16807.0f - q * 2836.0f);
}

void func_031540(Owner *owner, int b, Vec3 *c, void *d, Vec3 *p1, Vec3 *p2, Vec3 *p3, unsigned int flags, float param)
{
    Rec *rec;
    Link *lk;
    int n;
    float v[4];
    float x;
    float r1;
    float r2;
    float t;
    float cs;
    float sn;
    float lo;
    float hi;

    rec = func_08DEE8(&n, owner, 1);
    if (n == 0)
        return;
    lk = owner->link;
    rec->w80 = (unsigned char)b;
    rec->f6C = param;
    rec->f70 = 180.0f;
    rec->f74 = 1.0e30f;
    rec->w68 = 0;
    rec->v0 = *p1;
    rec->v1 = *p2;
    rec->v2 = *p3;
    rec->v3 = *c;
    if (flags == 0)
        flags = *D_001B5D20 | 0xFF000000;
    lo = lk->f14;
    hi = lk->f18;
    x = (float)rand();
    r1 = RandStep(x);
    r2 = RandStep(r1);
    func_1004F8(v, x, r1);
    t = lo + (hi - lo) * (r2 * 4.656612873077393e-10f);
    cs = cosf(t);
    sn = sqrtf(1.0f - cs * cs);
    if (t < 0.0f)
        sn = -sn;
    func_02B580((char *)rec + 0x30, D_001E3E88, lk->b28, d, v, sn, cs);
    rec->w7C = flags;
}
